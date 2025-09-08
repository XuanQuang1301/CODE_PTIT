#include <bits/stdc++.h>
using namespace std;
int n, s, t, parent[1005], dist[1005];
const int INF = 1e9;

struct Edge{
    int u, v, w;
};
vector<Edge> E;
int main(){
    freopen("BN.INP", "r", stdin);
    freopen("BN.OUT", "w", stdout);
    cin >> n >> s >> t;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int w; cin >> w ;
            if(w !=  0 && w !=  10000){
                E.push_back({i, j, w});
            }
        }
    }
    for(int i = 1; i <= n; i++){
        dist[i] = INF;
        parent[i] = -1;
    }
    dist[s] = 0;
    for(int i = 1; i <= n - 1; i++){
        for(const Edge &e : E){
            if(dist[e.u] != INF && dist[e.v] > dist[e.u] + e.w){
                dist[e.v] = dist[e.u] + e.w;
                parent[e.v] = e.u;
            }
        }
    }
    for(const auto &e : E){
        if(dist[e.u] != INF && dist[e.v] > dist[e.u] + e.w){
            cout << -1 << endl;
            return 0;
        }
    }
    if(dist[t] == INF){
        cout << 0 << endl;
        return 0;
    }
    vector<int> path;
    cout << dist[t] << endl;
    path.push_back(t);
    while(t != s){
        t = parent[t];
        path.push_back(t);
    }
    reverse(path.begin(), path.end());
    for(auto i : path) cout << i << " ";
    cout << endl;
}