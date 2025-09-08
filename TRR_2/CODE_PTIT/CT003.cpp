#include <bits/stdc++.h>
using namespace std;
set<int> adj[105];
int n, s; 
int vao[1000], ra[1000];
int main(){
    int t; cin >> t >> n;
    if(t == 1){
        for(int i = 1; i <= n; i++){
            string s; 
            getline(cin >> ws, s);
            stringstream ss(s);
            string v;
            ss >> v;
            while(ss >> v){
                int y = stoi(v);
                adj[i].insert(y);
                vao[y]++;
            }
        }
        for(int i = 1; i <= n; i++){
            ra[i] = adj[i].size();  
        }
        int cnt1 = 0, cnt2 = 0;
        for(int i = 1; i <= n; i++){
            if(abs(vao[i] - ra[i]) > 1) cnt1++;
            if(abs(vao[i] - ra[i]) == 1) cnt2++;
        }
        if(cnt1){
            cout << 0 << endl;
        }
        else if(cnt2 == 2){
            cout << 2 << endl;
        }
        else cout << 1 << endl;
    }
    else{
        int u; cin >> u;
        for(int i = 1; i <= n; i++){
            int k; cin >> k;
            for(int j = 1; j <= k; j++){
                int x; cin >> x;
                adj[i].insert(x);
            }
        }
        stack<int> st;
        vector<int> ans;
        st.push(u);
        while(!st.empty()){
            int x = st.top();
            if(!adj[x].empty()){
                int y = *adj[x].begin();
                adj[x].erase(y);
                adj[y].erase(x);
                st.push(y);
            }
            else{
                ans.push_back(x);
                 st.pop();
            }
        }
        reverse(ans.begin(), ans.end());
        for(int i : ans) cout << i << ' ';
    }
}