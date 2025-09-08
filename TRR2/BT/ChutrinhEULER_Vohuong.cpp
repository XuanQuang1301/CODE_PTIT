#include <bits/stdc++.h>
using namespace std;
int n, m;
set<int> adj[1000];
int degre[1001];
void nhap(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x].insert(y);
        adj[y].insert(x);
        degre[x]++;
        degre[y]++;
    }
}
void euler(int u){
    stack<int> st;
    vector<int> ec;
    st.push(u);
    while(!st.empty()){
        int x = st.top();
        if(adj[x].size() != 0){
            int y = *adj[x].begin();
            st.push(y);
            adj[x].erase(y);
            adj[y].erase(x);
        }
        else{
            st.pop();
            ec.push_back(x);    
        }
    }
    reverse(ec.begin(), ec.end());
    for(auto i : ec) cout << i << " ";
}
int main(){
    nhap();
    euler(1);
    cout << endl;
}