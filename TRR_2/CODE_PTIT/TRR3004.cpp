#include <bits/stdc++.h>
using namespace  std;
set<int> adj[1005];
vector<int> vao[1005], ra[1005];
int n, m;
vector<bool> vs;
void dfs(int u){
    vs[u] = true;
    for(auto i : adj[u]){
        if(!vs[i]){
            dfs(i);
        }
    }
}
int check1(){
    dfs(1);
    vs.assign(n + 1, false);
    for(int i = 1; i <= n; i++){
        if(!vs[i]) return 0;
    }
    int a = 0, b = 0;
    for(int i = 1; i <= n; i++){
        int x = vao[i].size(), y = ra[i].size();
        if(x != y){
            if(x > y){
                if(x - y == 1) a++;
                else return 0;
            }
            else{
                if(y - x == 1) b++;
                else return 0;
            }
        }
    }
    if(a == 0 && b == 0) return 1;
    else if(a == 1 && b == 1) return 2;
    return 0;
}
void check2(){
    stack<int> st;
    vector<int> solve;
    st.push(m);
    while(!st.empty()){
        int x = st.top();
        if(adj[x].size()){
            int y = *adj[x].begin();
            adj[x].erase(y);
            st.push(y);
        }
        else{
            st.pop();
            solve.push_back(x);
        }
    }
    reverse(solve.begin(), solve.end());
    for(int i : solve) cout << i << ' ';
}
int main(){
    int t; cin >> t;
    if(t == 1){
        cin >> n ;
    }
    else cin >> n >> m;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(x == 1){
                adj[i].insert(j);
                vao[j].push_back(i);
                ra[i].push_back(j);
            }
        }
    }
    if(t == 1) cout << check1();
    else check2();
}