#include <bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>> adj, vector<bool> visited, int u, int n){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    vector<pair<int, int>> ans;
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(auto i : adj[x]){
            if(!visited[i]){
                visited[i] = true;
                ans.push_back({x, i});
                q.push(i);
            }
        }
    }
    if(ans.size() != n - 1){
        cout << -1 << endl;
    }
    else{
        for(auto [x, y] : ans){
            cout << x << " " << y << endl;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n, m, u;
        cin >> n >> m >> u;
        vector<vector<int>> adj;
        vector<bool> visited;
        adj.resize(n + 1);
        visited.resize(n + 1, false);
        for(int i = 0; i < m; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bfs(adj, visited, u, n);
    }
}