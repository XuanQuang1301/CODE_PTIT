#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
int n, start;
vector<bool> vs;
vector<int> path;
vector<vector<int>> solve;
void dfs(int u, int count){
    vs[u] = true;
    path.push_back(u);
    if(count == n){
        if(adj[u][start]){
            path.push_back(start);
            solve.push_back(path);
            path.pop_back();
        }
    }
    else{
        for(int v = 1; v <= n; v++){
            if(adj[u][v] && !vs[v]){
                dfs(v, count + 1);
            }
        }
    }
    vs[u] = false;
    path.pop_back();
}
int main(){
    freopen ("CT.INP", "r", stdin);
    freopen ("CT.OUT", "w", stdout);
    cin >> n >> start;
    adj.assign(n + 1, vector<int> (n + 1));
    vs.assign(n + 1, false);
    path.clear(); solve.clear();
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> adj[i][j];
        }
    }
    dfs(1, start);
    if(solve.size() == 0) cout << 0 << endl;
    else{
        for(auto i : solve){
            for(auto j : i){
                cout << j << " ";
            }
            cout << endl;
        }

        cout << solve.size() << endl;
    }
}