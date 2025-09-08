#include <bits/stdc++.h>
using namespace std;
vector<bool> vs;
vector<vector<int>> adj;
set<int> ans[105];
int n, m, vao[105], ra[100];
void dfs(int u){
    vs[u] = true;
    for(auto i : adj[u]){
        if(!vs[i]){
            dfs(i);
        }
    }
}
int main(){
    // freopen ("CT.INP", "r", stdin);
    // freopen ("CT.OUT", "w", stdout);
    int t; cin >> t;
    if(t == 1){
        cin >> n;
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
        int lt = 0;
        for(int i = 1; i <= n; i++){
            if(!vs[i]){
                dfs(i);
                lt++;
            }
        }
        if(lt != 1){
            cout << 0 << endl;
        }
        else{
            int cnt = 0;
            for(int i = 1; i <= n; i++){
                if(adj[i].size() % 2 == 1) cnt++;
            }
            if(cnt == 0) cout << 1 << endl;
            else if(cnt == 2 ) cout << 2 << endl;
            else cout << 0 << endl;
        }
    }
    else{
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                int x; cin >> x;
                if(x == 1){
                    ans[i].insert(j);
                }
            }
        }
        stack<int> st;
        vector<int> solve;
        st.push(m);
        while(!st.empty()){
            int x = st.top();
            if(!ans[x].empty()){
                int y = *ans[x].begin();
                ans[x].erase(y);
                ans[y].erase(x);
                st.push(y);
            }
            else{
                st.pop();
                solve.push_back(x);
            }
        }
        reverse(solve.begin(), solve.end());
        for(auto i : solve) cout << i << " ";
    }
}