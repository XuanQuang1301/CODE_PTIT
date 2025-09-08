#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int solve = INT_MIN;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum = max(sum + a[i], a[i]);
            solve = max(solve, sum);
        }
        cout << solve << endl;
    }
}