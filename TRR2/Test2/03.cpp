#include <bits/stdc++.h>
using namespace std;
int n, m, u;
vector<vector<int>> adj;
vector<bool> visited;
ifstream in("CK.INP");
ofstream ou("CK.OUT");
void dfs(int u){
    stack<int> st;
    vector<pair<int, int>> ans;
    st.push(u);
    visited[u] = true;
    while(!st.empty()){
        int x = st.top();
        st.pop();
        for(auto i : adj[x]){
            if(!visited[i]){
                visited[i] = true;
                ans.push_back({i, x});
                st.push(x);
                st.push(i);
                break;
            }
        }
    }
    for(auto i : ans){
            cout << i .first << " " << i.second << endl;
        }
}
void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    vector<pair<int, int>> ans;
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(auto i : adj[x]){
            if(!visited[i]){
                visited[i] = true;
                ans.push_back({i, x});
                q.push(i);
            }
        }
    }
    for(auto [x, y] : ans){
            cout << x << " " << y << endl;
        }
}
int main(){
    
    int t; cin >> t;
    cin >> n >> m >> u;
    adj.clear(); adj.resize(n + 1);
    visited.clear();
    visited.resize(n + 1, false);
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if(t == 1){
        dfs(u);
    }
    else bfs(u);
}