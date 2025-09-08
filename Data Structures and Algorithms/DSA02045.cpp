#include <bits/stdc++.h>
using namespace std;
int n, a[1000], vs[100];
string s;
vector<string> ans;
void Try(int i){
    for(int j = i; j < n; j++){
        if(!vs[j] && a[i - 1] <= j){
            vs[j] = 1;
            a[i] = j;
            string solve = "";
            for(int x = 0; x <= i; x++){
                solve += s[a[x]];
            }
            ans.push_back(solve);
            Try(i + 1);
            vs[j] = 0;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> s;
        memset(vs, 0, sizeof(vs));
        memset(a, 0, sizeof(a));
        Try(0);
        for(auto i : ans){
            cout << i << " ";
        }
    }
}