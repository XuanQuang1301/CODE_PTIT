#include <bits/stdc++.h>
using namespace std;
int prepare(char a){
    if(a == '^') return 4;
    if(a == '*' || a == '/') return 3;
    if(a == '+' || a == '-') return 2;
    return 1;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<char> st;
        vector<string> ans;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else if(s[i] == ')'){
                while(!st.empty() && st.top() != '('){
                    ans.push_back(string(1, st.top()));
                    st.pop();
                }
                st.pop();
            }
            else if(s[i] == '-' || s[i] == '+' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
                while(!st.empty() && prepare(st.top()) >= prepare(s[i])){
                    ans.push_back(string(1, st.top()));
                    st.pop();
                }
                st.push(s[i]);
            }
            else{
                ans.push_back(string(1, s[i]));
            }
        }
        while(!st.empty()){
            ans.push_back(string(1, st.top()));
            st.pop();
        }
        for(auto i : ans){
            cout << i;
        }
        cout << endl;
    }
}