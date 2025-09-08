#include <bits/stdc++.h>
using namespace std;
int v, e;
vector<vector<int>> adj;
vector<bool> vs;
vector<int> ans;
bool ok;
void dfs(int u, int pre, vector<int> path){
    vs[u] = true;
    for(auto i : adj[u]){
        if(i == 1 && i != pre && ans.empty()){
            path.push_back(i);
            ans = path;
            return;
        }
        if(!vs[i]){
            path.push_back(i);
            dfs(i, u, path);
            path.pop_back();
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> v >> e;
        adj.assign(v + 10, {});
        ans.clear();
        vs.assign(v + 10, false);
        while(e--){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(auto &i : adj){
            sort(i.begin(), i.end());
        }
        dfs(1, -1, {1});
        if(ans.empty()) cout << "NO" << endl;
        else{
            for(auto i : ans) cout << i << " ";
            cout << endl;
        }
    }
}