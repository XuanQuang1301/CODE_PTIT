#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
int color[1000];
int v, e, m;

bool check(int u, int c){
    for(auto i : adj[u]){
        if(color[i] == c) return false;
    }
    return true;
}
bool solve(int u){
    if(u > v) return true;
    for(int c = 1; c <= m; c++){
        if(check(u, c)){
            color[u] = c;
            if(solve(u + 1)) return true;
            color[u] = 0;
        }
    }
    return false;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> v >> e >> m;
        adj.assign(v + 10, {});
        memset(color, 0, sizeof(color));
        for(int i = 0; i < e; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        cout << (solve(1) ?  "YES" : "NO") << endl;
    }
}