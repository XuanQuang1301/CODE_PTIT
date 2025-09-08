#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> vs;
int v, e, tmp;
void dfs(int u){
    tmp++;
    vs[u] = true;
    for(auto i : adj[u]){
        if(!vs[i]){
            dfs(i);
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> v >> e;
        adj.assign(v + 10, {});
        vs.assign(v + 10, false);
        while(e--){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int dem = 0;
        for(int i = 1; i <= v; i++){
            if(!vs[i]){
                tmp = 0;
                dfs(i);
                dem = max(dem, tmp);
            }
        }
        cout << dem << endl;
    }
}