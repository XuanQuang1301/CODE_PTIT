#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> vs;
int n, m, u;
void dfs(int u){
    vs[u] = true;
    for(auto i : adj[u]){
        if(!vs[i]){
            dfs(i);
        }
    }
}
int main(){
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    cin >> n;
    vs.assign(n + 1, false);
    adj.assign(n + 1, {});
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(x == 1){
                adj[i].push_back(j);
            }
        }
    }
    vector<int> solve;
    int lt = 0;
    for(int i = 1; i <= n; i++){
        if(!vs[i]){
            dfs(i);
            lt++;
        }
    }
    for(int i = 1; i <= n; i++){
        fill(vs.begin(), vs.end(), false);
        vs[i] = true;
        int tmp = 0;
        for(int j = 1; j <= n; j++){
            if(!vs[j]){
                dfs(j);
                tmp++;
            }
        }
        if(tmp > lt){
            solve.push_back(i);
        }
    }
    cout << solve.size() << endl;
    for(auto i : solve) cout << i << " ";
    cout << endl;
}