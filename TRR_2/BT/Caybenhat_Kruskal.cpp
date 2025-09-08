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
bool cmp(Node a, Node b){
    if(a.w == b.w){
        if(a.u == b.u) return a.v < b.v;
        return a.u < b.u;
    }
    return a.w < b.w;
}
void Kruskal(vector<Node> E, int n){
    vector<bool> visited(n + 1, false);
    vector<pair<int, int>> canh;
    int sum = 0;
    sort(E.begin(), E.end(), cmp);
    for(auto i : E){
        if(!visited[i.u] || !visited[i.v]){
            sum += i.w;
            visited[i.u] = visited[i.v] = true;
            canh.push_back({i.u, i.v});
        }
    }
    cout << sum << endl;
    for(auto i : canh){
        cout << i.first << " " << i.second << endl;
    }
}
int main(){
    int n; cin >> n;
    int a[100][100];
    vector<Node> E;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(i < j && a[i][j] != 0){
                E.push_back(Node(i, j, a[i][j]));
            }
        }
    }
    Kruskal(E, n);
}