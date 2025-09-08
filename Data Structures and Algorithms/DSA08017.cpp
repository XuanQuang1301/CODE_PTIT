#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<string> ans;
        ans.push_back("6");
        ans.push_back("8");
        queue<string> q;
        q.push("6");
        q.push("8");
        while(1){
            string z = q.front(); q.pop();
            string x = z + "6";
            if(x.size() > n) break;
            q.push(x); ans.push_back(x);
            x = z + "8";
            q.push(x); ans.push_back(x);
        }
        for(int i = ans.size() - 1; i >= 0; i--){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}