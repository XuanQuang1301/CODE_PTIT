#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ')'){
                st.push(s[i]);
            }
            else{
                string tmp = "";
                while(!st.empty() && st.top() != '('){
                    tmp = st.top() + tmp;
                    st.pop();
                }
                st.pop();
                if(!st.empty() && st.top() == '-'){
                    for(char &i : tmp){
                        if(i == '-') i = '+';
                        else if(i == '+') i = '-';
                        st.push(i);
                    }
                }
                else{
                    for(auto i : tmp){
                        st.push(i);
                    }
                }
            }
        }
        string ans = "";
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        cout << ans << endl;
    }
}