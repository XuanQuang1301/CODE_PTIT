#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
int n, m, u, train[1000];
vector<bool> vs;
void bfs(){
    queue<int> q;
    q.push(m);
    while(!q.empty()){
        int x = q.front(); q.pop();
        vs[x] = true;
        for(auto i : adj[x]){
            if(!vs[i]){
                vs[i] = true;
                q.push(i);
                train[i] = x;
                if(i == u){
                    return;
                }
            }
        }
    }
}
int main(){
    freopen("TK.INP", "r", stdin);
    freopen("TK.OUT", "w", stdout);
    int t;
    cin >> t >> n >> m >> u;
    vs.clear(); vs.assign(n + 1, false);
    adj.clear(); adj.assign(n + 1, {});
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(x == 1){
                adj[i].push_back(j);
            }
        }
    }
    if(t == 1){
        int tmp = 0;
        for(int i : adj[m]){
            if(i != u){
                for(int j : adj[i]){
                    if(j == u){
                        tmp++;
                    }
                }
            }
        }
        cout << tmp << endl;
    }
    else{
        train[m] = 0;
        bfs();
        vector<int> ans;
        ans.push_back(u);
        int tmp = train[u];
        while(tmp != 0){
            ans.push_back(tmp);
            tmp = train[tmp];
        }
        reverse(ans.begin(), ans.end());
        for(auto i : ans) cout << i << " ";
    }
}