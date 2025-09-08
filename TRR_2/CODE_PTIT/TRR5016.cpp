#include <bits/stdc++.h>
using namespace std;
int n;
const int INF = 1e9;
int a[1005][1005];
int nextnode[1005][1005];
void floyd(){
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(a[i][k] < INF and a[k][j] < INF and a[i][j] > a[i][k]+a[k][j]){
                    a[i][j] = a[i][k] + a[k][j];
                    nextnode[i][j]= nextnode[i][k];
                }
            }
        }
    }
}
vector <int> getpath (int u, int v){
    if(nextnode[u][v]==-1) return {};
    vector <int> path ={u};
    while(u!=v){
        u = nextnode[u][v];
        path.push_back(u);
    }
    return path;
}
int main(){
    freopen("DN.INP", "r", stdin);
    freopen("DN.OUT", "w", stdout);
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            if(a[i][j]==10000) a[i][j]=INF;
            if (a[i][j] < INF)
                nextnode[i][j] = j;
            else
                nextnode[i][j] = -1;
        }
    }
    floyd();
    int maxDist = -1, u_ans = -1, v_ans=-1;
    for(int u =1; u<=n; u++){
        for(int v=1; v<=n; v++){
            if(u!=v and a[u][v] != INF){
                if(a[u][v] > maxDist || (a[u][v] == maxDist and make_pair(u, v)< make_pair(u_ans, v_ans))){
                    maxDist = a[u][v];
                    u_ans = u;
                    v_ans = v;
                }
            }
        }
    }
    if(maxDist == -1) cout << 0 << endl;
    else {
        cout << u_ans <<" "<<v_ans <<" " << maxDist << endl;
        vector <int> path = getpath(u_ans, v_ans);
        for(int x:path) cout << x <<" ";
        cout << endl;
    }
}