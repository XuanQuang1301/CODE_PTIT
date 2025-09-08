#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> path;
vector<vector<int>> ans;
void Try(int i, int sum){
    for(int j = i; j >= 1; j--){
        if(sum + j > n) continue;
        path.push_back(j);
        if(sum + j == n){
            ans.push_back(path);
        }
        else Try(j, sum + j);
        path.pop_back();
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        path.clear(); ans.clear();
        Try(n, 0);
        cout << ans.size() << endl;
        for(auto i : ans){
            cout << "(";
            for(int j = 0; j < i.size(); j++){
                cout << i[j];
                if(j < i.size() - 1) cout << " ";
            }
            cout << ") ";
        }
        cout << endl;
    }
}