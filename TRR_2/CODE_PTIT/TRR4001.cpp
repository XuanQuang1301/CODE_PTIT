#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> vs;
int n, m;
vector<pair<int, int>> canh;
void dfs(){
    stack<int> st;
    st.push(m);
    while(!st.empty()){
        int x = st.top(); st.pop();
        vs[x] = true;
        for(auto i : adj[x]){
            if(!vs[i]){
                canh.push_back({min(i, x), max(i, x)});
                st.push(x);
                st.push(i);
                break;
            }
        }
    }
}
void bfs(){
    queue<int> q;
    q.push(m);
    while(!q.empty()){
        int x = q.front(); q.pop();
        vs[x] = true;
        for(auto i : adj[x]){
            if(!vs[i]){
                vs[i] = true;
                canh.push_back({min(i, x), max(i, x)});
                q.push(i);
            }
        }
    }
}
int main(){
    freopen("CK.INP", "r", stdin);
    freopen("CK.OUT", "w", stdout);
    int t; cin >> t;
    cin >> n >> m;
    adj.assign(n + 1, {});
    vs.assign(n + 1, false);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(x == 1){
                adj[i].push_back(j);
            }
        }
    }
    canh.clear(); 
    if(t == 1) dfs();
    else bfs();
    if(canh.size() != n - 1){
        cout << 0 << endl;
    }
    else{
        cout << canh.size() << endl;
        for(auto i : canh){
            cout << i.first << " " << i.second << endl;
        }
    }
}