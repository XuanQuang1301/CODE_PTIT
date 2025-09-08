#include <bits/stdc++.h>
using namespace std;
struct Node{
    int u, v, w;
    Node (int u, int v, int w){
        this -> u = u;
        this -> v = v;
        this -> w = w;
    }
};
int n, m, parent[1005];
vector<bool> vs;
vector<Node> adj;
int find(int u){
    if(u == parent[u]) return u;
    return parent[u] = find(parent[u]);
}
bool check(int u, int v){
    u = find(u);
    v = find(v);
    if(v == u) return false;
    parent[v] = u;
    return true;
}
bool cmp(Node a, Node b){
    if(a.w == b.w){
        if(a.u == b.u) return a.v < b.v;
        return a.u < b.u;
    }
    return a.w < b.w;
}
void Kru(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
    }
    vector<string> solve;
    int sum = 0;
    sort(adj.begin(), adj.end(), cmp);
    for(auto i : adj){
        if(check(i.u, i.v)){
            sum += i.w;
            int x = min(i.u, i.v);
            int y = max(i.v, i.u);
            string s = to_string(x) + " " + to_string(y) + " " + to_string(i.w);
            solve.push_back(s);
        }
    }
    cout << sum << endl;
    for(auto i : solve) cout << i << endl;
}
int main(){
    freopen("CK.INP", "r", stdin);
    freopen("CK.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y, w;
        cin >> x >> y >> w;
        adj.push_back({x, y, w});
    }
    Kru();
}