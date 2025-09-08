#include <bits/stdc++.h>
using namespace std;
#define II pair<int, int>
vector<vector<II>> adj;
vector<bool> vs;
vector<int> d;
int v, e, u, V, E, w;
struct cmp{
    bool operator()(pair<int, int> a, pair<int, int> b){
        return a.second > b.second;
    }
};

void solve(){
    priority_queue<II, vector<II>, cmp> q;
    q.push({u, 0});
    vs[u] = true;
    d[u] = 0;
    while(!q.empty()){
        v = q.top().first;
        w = q.top().second;
        q.pop();
        vs[v] = true;
        for(auto i : adj[v]){
            int x = i.first;
            if(!vs[x]){
                d[x] = min(d[x], w + i.second);
                q.push({x, d[x]});
            }
        }
    }
    for(int i = 1; i <= V; i++){
        cout << d[i] << " ";
    }
    cout << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> V >> E >> u;
        adj.assign(V, {});
        vs.assign(V + 10, false);
        d.assign(V + 10, {});
        for(int i = 0; i < E; i++){
            cin >> v >> e >> w;
            adj[v].push_back({e, w});
            adj[e].push_back({v, w});
        }
        solve();
    }
}