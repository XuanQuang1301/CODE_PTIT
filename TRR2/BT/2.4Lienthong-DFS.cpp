#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> check;
int n, cnt;
vector<vector<int>> VE;
vector<int> v;
void inp(){
    cin >> n;
    adj.clear(); adj.resize(n + 10);
    check.clear(); check.resize(n + 10);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(x == 1){
                adj[i].push_back(j);
            }
        }
    }
    VE.clear();
}
void DFS(int u){
    check[u] = true;
    v.push_back(u);
    for(auto i : adj[u]){
        if(!check[i]){
            DFS(i);
        }
    }
}
void Dem(){
    for(int i = 1; i <= n; i++){
        if(!check[i]){
            DFS(i);
            VE.push_back(v);
            v.clear();
        }
    }
}
int main(){
    inp();
    Dem();
    cout << VE.size() << endl;
    for(auto i : VE){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
}