#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> check;
int n, cnt;
vector<vector<int>> VE;
vector<int> v;
void inp(){
    cin >> n;
    adj.clear(); adj.resize(n + 10);
    check.clear(); check.resize(n + 10);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int x; cin >> x;
            if(x == 1){
                adj[i].push_back(j);
            }
        }
    }
    VE.clear();
}
void BFS(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int x = q.front(); q.pop();
        check[x] = true;
        v.push_back(x);
        for(auto i : adj[x]){
            if(!check[i]){
                check[i] = true;
                q.push(i);
            }
        }
    }
}
void Dem(){
    for(int i = 1; i <= n; i++){
        if(!check[i]){
            BFS(i);
            VE.push_back(v);
            v.clear();
        }
    }
}
int main(){
    inp();
    Dem();
    cout << VE.size() << endl;
    for(auto i : VE){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
}