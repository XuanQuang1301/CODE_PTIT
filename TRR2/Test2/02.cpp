#include <bits/stdc++.h>
using namespace std;
bool visited[1005];
int n, m;
vector<int> adj[100];
set<int> s;
void dfs(int u, int bl){
    if(u == bl) return ;
    visited[u] = true;
    for(int v : adj[u]){
        if(!visited[v] && v != bl){
            dfs(v, bl);
        }
    }
}
bool cr(int s, int u, int v){
    memset(visited, false, sizeof(visited));
    dfs(u, s);
    return !visited[v];
}
int main(){
    cin >> n >> m;
    int st, g;
    cin >> st >> g;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int> ans;
    for(int i = 1; i <= n; i++){
        if(i != st && i != g && cr(i, st, g)){
            ans.push_back(i);
        }
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}