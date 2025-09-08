#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> canh;
vector<vector<int>> adj;
vector<bool> check;
void dfs(int u){
    check[u] = true;
    for(auto i : adj[u]){
        if(!check[i]){
            dfs(i);
        }
    }
}
void dfs2(int s, int u, int v){
    check[s] = true;
    for(auto i : adj[s]){
        if((i == u && s == v) || i == v && s == u) continue;
        if(!check[i]){
            dfs2(i, u, v);
        }
    }
}
int main(){
    int n; cin >> n;
    adj.resize(n + 5);
    check.resize(n + 5, false);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(x == 1){
                adj[i].push_back(j);
                if(i < j) canh.push_back({i, j});
            }
        }
    }
    int lt = 0;
    for(int i = 1; i <= n; i++){
        if(!check[i]){
            lt++;
            dfs(i);
        }
    }
    vector<pair<int, int>> ve;
    for(auto i : canh){
        int x = i.first;
        int y = i.second;
        fill(check.begin(), check.end(), false);
        int tmp = 0;
        for(int i = 1; i <= n; i++){
            if(!check[i]){
                tmp++;
                dfs2(i, x, y);
            }
        }
        if(tmp > lt){
            ve.push_back({x, y});
        }
    }
    cout << ve.size() << endl;
    for(auto i : ve){
        cout << i.first << " " << i.second << endl;
    }
}