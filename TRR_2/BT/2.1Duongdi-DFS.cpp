#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> check;
int n, u, v, cnt, train[1000], ok;
void inp(){
    cin >> n >> u >> v;
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
}
void Test1(){
    cnt = 0;
    for(auto i : adj[u]){
        for(auto j : adj[i]){
            if(j == v){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
void DFS(int u){
    check[u] = true;
    if(u == v){
        ok = 1;
    }
    if(ok){
        return;
    }
    for(auto i : adj[u]){
        if(!check[i]){
            check[i] = true;
            train[i] = u;
            DFS(i);
        }
    }
}
void Test2(){
    ok = 0;
    memset(train, 0, sizeof(train));
    DFS(u);
    vector<int> V;
    V.push_back(v);
    int tmp = train[v];
    while(tmp != 0){
        V.push_back(tmp);
        tmp = train[tmp];
    }
    for(int i = V.size() - 1; i >= 0; i--){
        cout << V[i] << " ";
    }
    cout << endl;
}
int main(){
    int t; cin >> t;
    inp();
    if(t == 1){
        Test1();
    }
    else Test2();
}