#include <bits/stdc++.h>
using namespace std;
struct Node{
    int u, v, w;
    Node(int u, int v, int w){
        this -> u = u;
        this -> v = v;
        this -> w = w;
    }
};
int n, m;
vector<Node> adj;
bool cmp(Node a, Node b){
    if(a.w == b.w){
        if(a.u == b.u) return a.v < b.v;
        return a.u < b.u;
    }
    return a.w < b.w;
}
void Prim(){
    vector<bool> vs;
    vs.assign(n + 1, false);
    int sum = 0;
    vector<string> solve;
    vs[m] = true;
    sort(adj.begin(), adj.end(), cmp);
    while(solve.size() < n - 1){
        for(auto i : adj){
            if((!vs[i.u] && vs[i.v]) || (!vs[i.v] && vs[i.u])){
                vs[i.u] = vs[i.v] = true;
                sum += i.w;
                int x = min(i.v, i.u), y = max(i.v, i.u);
                string  s = to_string(x) + " " + to_string(y) + " " + to_string(i.w);
                solve.push_back(s);
                break;
            }
        }
    }
    cout << sum << endl;
    for(auto i : solve) cout << i << endl;
}

int main(){
    freopen ("CK.INP", "r", stdin);
    freopen ("CK.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int w; cin >> w;
            if(w != 0 && w != 10000){ adj.push_back(Node({i, j, w}));}
        }
    }
    Prim();
}