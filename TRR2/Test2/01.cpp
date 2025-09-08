#include <bits/stdc++.h>
using namespace std;
int n, m, u;
vector<vector<int>> adj;
vector<bool> visited;
int deg[100];
int a[100][100];
int main(){
    int t; cin >> t;
    cin >> n >> m;
    memset(a, 0, sizeof(a));
    adj.clear(); adj.resize(n + 1);
    memset(deg, 0, sizeof(deg));
    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        deg[x]++;
        deg[y]++;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    if(t == 1){
        for(int i = 1; i <= n; i++){
            cout << adj[i].size() << " ";
        } 
    }
    else{
        cout << n << endl;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}