#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1000];
bool visited[1000];
int n, m;
void inp(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}
void DFS(int u){
    cout << u << " ";
    visited[u] = true;
    for(auto v : adj[u]){
        if(!visited[v]){
            DFS(v);
        }
    }
}
int main(){
    inp();
    DFS(1);
}