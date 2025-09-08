#include <bits/stdc++.h>
using namespace std;
int n, m, v;
vector<bool> vs;
vector<vector<int>> adj, solve;
vector<int> path;
void dfs(int u, int count){
    vs[u] = true;
    path.push_back(u);
    if(count == n){
        if(adj[u][v]){
            path.push_back(v);
            solve.push_back(path);
            path.pop_back();
        }
    }
    for(int i = 1; i <= n; i++){
        if(!vs[i] && adj[u][i]){
            dfs(i, count + 1);
        }
    }
    vs[u] = false;
    path.pop_back();
}
int main(){
    cin >> n >> m >> v;
    adj.assign(n + 1, vector<int> (n + 1, 0));
    vs.assign(n + 1, false);
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x][y] = 1;
        adj[y][x] = 1;
    }
    path.clear(); solve.clear();
    dfs(v, 1);
    cout << solve.size() << endl;
    for(const auto &i : solve){
        for(auto j : i){
            cout << j << ' ';
        }
        cout << endl;
    }
}