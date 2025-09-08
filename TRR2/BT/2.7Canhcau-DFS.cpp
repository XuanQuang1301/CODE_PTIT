#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> check;
int v, e;
vector<pair<int, int>> VE;
vector<pair<int, int>> dscanh;

void inp(){
    cin >> v >> e;
    adj.clear(); adj.resize(v + 10);
    check.clear(); check.resize(v + 10, false);
    dscanh.clear(); dscanh.resize(e + 10);
    for(int i = 1; i <= e; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        dscanh.push_back({x, y});
    }
}
void DFS(int u){
    check[u] = true;
    for(auto i : adj[u]){
        if(!check[i]){
            DFS(i);
        }
    }
}
void DFS2(int u, int s, int t){
    check[u] = true;
    for(auto i : adj[u]){
        if((u == s && i == t) || (u == t && i == s)){
            continue;
        }
        if(!check[i]){
            DFS2(i, s, t);
        }
    }
}
void CanhCau(){
    int lt = 0;
    for(int i = 1; i <= v; i++){
        if(!check[i]){
            lt++;
            DFS(i);
        }
    }
    for(auto it : dscanh){
        int x = it.first, y = it.second;
        fill(check.begin(), check.end(), false);
        int dem = 0;
        for(int j = 1; j <= v; j++){
            if(!check[j]){
                dem++;
                DFS2(j, x, y);

            }
        }
        if(dem > lt){
            VE.push_back(it);
        }
    }
}
int main(){
    inp();
    CanhCau();
    cout << VE.size() << endl;
    for(auto i : VE){
        cout << i.first << " " << i.second << endl;
    }
    VE.clear();
}