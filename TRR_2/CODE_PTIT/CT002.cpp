#include <bits/stdc++.h>
using namespace std;
set<int> adj[1000];
int n, u;

int main(){
    int t; cin >> t;
    if(t == 1){
        cin >> n;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                int x; cin >> x;
                if(x== 1){
                    adj[i].insert(j);
                }
            }
        }
        int tmp = 0;
        for(int i = 1; i <= n; i++){
            if(adj[i].size() % 2 != 0){
                tmp++;
            }
        }
        if(tmp == 2){
            cout << 2 << endl;
        }
        else if(tmp == 0){
            cout << 1 << endl;
        }
        else cout << 0 << endl;
    }
    else{
        cin >> n >> u;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                int x; cin >> x;
                if(x== 1){
                    adj[i].insert(j);
                }
            }
        }
        stack<int> st;
        st.push(u);
        vector<int> ans;
        while(!st.empty()){
            int x = st.top();
            if(!adj[x].empty()){
                int y = *adj[x].begin();
                adj[x].erase(y);
                adj[y].erase(x);
                st.push(y);
            }
            else{
                st.pop();
                ans.push_back(x);
            }
        }
        reverse(ans.begin(), ans.end());
        for(auto i : ans) cout << i << " ";
    }
}