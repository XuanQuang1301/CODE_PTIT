#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
int n, m;
vector<int> path;
vector<vector<int>> solve;
vector<bool> vs;
void dfs(int u, int count){
    vs[u] = true;
    path.push_back(u);
    if(count == n){
        if(adj[u][m]){
            path.push_back(m);
            solve.push_back(path);
            path.pop_back();
        }
    }
    for(int i = 1; i <= n; i++){
        if(!vs[i] && adj[u][i] == 1){
            dfs(i, count + 1);
        }
    }
    vs[u] = false;
    path.pop_back();
}
int main(){
    // freopen("CT.INP", "r", stdin);
    // freopen("CT.OUT", "w", stdout);
    cin >> n >> m;
    adj.assign(n + 1, vector<int> (n + 1));
    vs.assign(n + 1, false);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> adj[i][j];
        }
    }
    path.clear(); solve.clear();
    dfs(m, 1);
        cout << solve.size() << endl;
        for(const auto &i : solve){
            for(auto j : i){
                cout << j << ' ';
            }
            cout << endl;
        }
}