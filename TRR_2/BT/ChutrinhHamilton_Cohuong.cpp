#include <bits/stdc++.h>
using namespace std;
int n, m, u, path[100];
vector<bool> visited;
vector<vector<int>> adj, solve;

void dfs(int i){
    int pre = path[i - 1];
    for(int j : adj[pre]){
        if(i == n + 1 && j == u){
            vector<int> tmp;
            for(int i = 1; i <= n; i++){
                tmp.push_back(path[i]);
            }
            tmp.push_back(u);
            solve.push_back(tmp);
        }
        else if(!visited[j]){
            visited[j] =  true;
            path[i] = j;
            dfs(i + 1);
            visited[j] = false;
        }
    }
}
int main(){
    ifstream in("CT.INP");
    ofstream ou("CT.OUT");
    
    in >> n >> m >> u;
    
    adj.clear(); adj.resize(n + 5);
    visited.clear(); visited.resize(n + 5, false);
    solve.clear();
    for(int i = 0; i < m; i++){
        int x, y; in >> x >> y;
        adj[x].push_back(y);
    }
    path[1] = u;
    visited[u] = true;
    dfs(2);
    ou << solve.size() << endl;
    for(const auto &i : solve){
        for(auto j : i){
            ou << j << " ";
        }
        ou << endl;
    }
    in.close();
    ou.close();
    return 0;
}