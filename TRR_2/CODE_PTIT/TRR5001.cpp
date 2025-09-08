#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj[1005];
int n, m, u, v, dist[1005], parent[1005];
vector<bool> vs;
const int INF = 1e9;
void DIJ(int u, int n){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> qp;
    for(int i = 1; i <= n; i++){
        dist[i] = INF;
        parent[i] = -1;
    }
    qp.push({0, u});
    dist[u] = 0;
    while(!qp.empty()){
        pair<int, int> it = qp.top(); qp.pop();
        int du = it.first, u = it.second;
        if(du > dist[u]) continue;
        for(auto it1 : adj[u]){
            if(dist[it1.first] > dist[u] + it1.second){
                dist[it1.first] = dist[u] + it1.second;
                parent[it1.first] = u;
                qp.push({dist[it1.first], it1.first});
            }
        }
    }
}
void path(int st, int ed){
    if(parent[ed] == -1){
        cout << 0 << endl;
        return;
    }
    vector<int> solve;
    int ans = dist[ed];
    solve.push_back(ed);
    while(ed != st){
        solve.push_back(parent[ed]);
        ed = parent[ed];
    }
    reverse(solve.begin(), solve.end());
    cout << ans << endl;
    for(auto i : solve) cout << i << " ";
    cout << endl;
}
int main(){
    freopen("DN.INP", "r", stdin);
    freopen("DN.OUT", "w", stdout);
    cin >> n >> u >> v;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int w; cin >> w;
            if(w > 0 && w < 10000){
                adj[i].push_back({j, w});
            }
        }
    }
    DIJ(u, n);
    path(u, v);
}