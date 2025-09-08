#include <bits/stdc++.h>
using namespace std;
const int INF = 1e3;
int n, u, start;
vector<int> solve;
vector<bool> vs;
vector<vector<int>> adj;
int ans = INT_MAX;
void Hal(int u, int cnt, int sum, vector<int> &path){
    if(sum > ans) return;
    if(cnt == n){
        if(adj[u][start] > 0 && adj[u][start] < 10000){
            int x = sum + adj[u][start];
            if(x < ans){
                ans = x;
                solve = path;
                solve.push_back(start);
            }
        }
        //return;
    }
    for(int v = 1; v <= n; v++){
        if( !vs[v] && adj[u][v] > 0 && adj[u][v] < 10000){
            vs[v] = true;
            path.push_back(v);
            Hal(v, cnt + 1, sum + adj[u][v], path);
            path.pop_back();
            vs[v] = false;
        }
    }
}
int main(){
    cin >> n >> start;
    adj.assign(n + 1, {0});
    vs.assign(n + 1, false);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> adj[i][j];
        }
    }
    vs[start] = true;
    solve.clear();
    vector<int> path;
    path.push_back(start);
    Hal(start, 1, 0, path);
    if(ans == INT_MAX) cout << 0 << endl;
    else{
        cout << ans << endl;
        for(auto i : solve) cout << i << " ";
    }

}