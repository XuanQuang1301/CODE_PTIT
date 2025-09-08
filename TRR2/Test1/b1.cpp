#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> check;
vector<vector<int>> ans;
vector<int> tmp;
void dfs(int u){
    check[u] = true;
    tmp.push_back(u);
    for(auto i : adj[u]){
        if(!check[i]){
            dfs(i);
        }
    }
}
int main(){
    int n; cin >> n;
    check.resize(n + 10, false);
    adj.resize(n + 10);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(x == 1){
                adj[i].push_back(j);
            }
        }
    }
    for(int i = 1; i <= n; i++){
        if(!check[i]){
            tmp.clear();
            dfs(i);
            sort(tmp.begin(), tmp.end());
            ans.push_back(tmp);
        }
    }
    cout << ans.size() << endl;
    for(auto i : ans){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
}