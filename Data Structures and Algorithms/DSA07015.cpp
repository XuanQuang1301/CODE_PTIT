#include <bits/stdc++.h>
using namespace std;
int prepare(char a){
    if(a == '*' || a == '/') return 3;
    if(a == '+' || a == '-') return 2;
    return 1;
}
long long solve(string x, string y, string a){
    if(a == "+") return stoll(x) + stoll(y);
    if(a == "-") return stoll(x) - stoll(y);
    if(a == "*") return stoll(x) * stoll(y);
    return stoll(x) / stoll(y);
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        vector<string> ve;
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(isdigit(s[i])){
                string tmp = "";
                while(isdigit(s[i])){
                    tmp = tmp + s[i];
                    i++;
                }
                i--;
                ve.push_back(tmp);
            }
            else if(s[i] == '('){
                st.push(s[i]);
            }
            else if(s[i] == ')'){
                while(!st.empty() && st.top() != '('){
                    ve.push_back(string(1, st.top()));
                    st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty() && prepare(st.top()) >= prepare(s[i])){
                    ve.push_back(string(1, st.top()));
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ve.push_back(string(1, st.top()));
            st.pop();
        }
        stack<string> ST;
        for(int i = 0; i < ve.size(); i++){
            if(ve[i] == "+" || ve[i] == "-" || ve[i] == "*" || ve[i] == "/"){
                string x = ST.top(); ST.pop();
                string y = ST.top(); ST.pop();
                long long z = solve(y, x, ve[i]);
                ST.push(to_string(z));
            }
            else ST.push(ve[i]);
        }
        cout << ST.top() << endl;
    }
}