#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> check;
int n, x;
vector<int> VE;
void inp(){
    cin >> n;
    adj.clear(); adj.resize(n + 10);
    check.clear(); check.resize(n + 10, false);
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        int y;
        while(x--){
            cin >> y;
            adj[i].push_back(y);
        }
    }
}
void DFS(int u){
    check[u] = true;
    for(auto i : adj[u]){
        if(!check[i]){
            DFS(i);
        }
    }
}
void Dem_Tru(){
    int lt = 0;
    for(int i = 1; i <= n; i++){
        if(!check[i]){
            lt++;
            DFS(i);
        }
    }
    for(int i = 1; i <= n; i++){
        fill(check.begin(), check.end(), false);
        check[i] = true;
        int dem = 0;
        for(int j = 1; j <= n; j++){
            if(!check[j]){
                dem++;
                DFS(j);
            }
        }
        if(dem > lt){
            VE.push_back(i);
        }
    }  
}
int main(){
    inp();
    Dem_Tru();
    cout << VE.size() << endl;
    for(auto i : VE){
        cout << i << " ";
    }
    cout << endl;
    VE.clear();
}