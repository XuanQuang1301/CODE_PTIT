#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> check;
int V, e, u, v, cnt, train[1000], ok;
void inp(){
    cin >> V >> e >> u >> v;
    adj.clear(); adj.resize(V + 10);
    check.clear(); check.resize(V + 10);
    for(int i = 0; i < e; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
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
void BFS(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int x = q.front(); q.pop();
        check[x] = true;
        int tmp = x;
        for(auto i : adj[x]){
            if(!check[i]){
                train[i] = tmp;
                tmp = train[i];
                q.push(i);
                check[i] = true;
            }
        }
    }
}
void Test2(){
    ok = 0;
    memset(train, 0, sizeof(train));
    BFS(u);
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