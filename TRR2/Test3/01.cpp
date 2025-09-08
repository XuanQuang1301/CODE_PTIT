#include <bits/stdc++.h>
using namespace std;

int t, n, m;
vector<int> deg(101, 0);

int main() {
    ifstream in("DT.INP");
    ofstream out("DT.OUT");

    cin >> t >> n;
    
    if(t == 1){
        cin >> m;
        for(int i = 1; i <= m; i++){
            int u, v;
            cin >> u >> v;
            deg[u]++;
            deg[v]++;
        }
        for(int v = 1; v <= n; v++)
            cout << deg[v] << " ";
    } 
    else{
        int a[101][101] = {};
        for(int u = 1; u <= n; u++){
            int k;
            cin >> k;
            while(k--){
                int v;
                cin >> v;
                a[u][v] = 1;
            }
        }

        cout << n << endl;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    in.close();
    out.close();
    return 0;
}