#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define pb push_back
#define pob pop_back
const int MAX = 1005;
const int MOD = 1e9 + 7;
int n, m, u;
vector<int> ke[1005];
vector<vector<int>> a(105, vector<int>(105,0));
int dfs(int u){
	vector<bool> v(1005, 0);
	v[u] = true;
	stack<int> st;
	st.push(u);
	while(!st.empty()){
		int tmp = st.top(); st.pop();
		for(auto x:ke[tmp]){
			if(!v[x]){
				v[x] = true;
				st.push(tmp);
				st.push(x);
				break;
			}
		}
	}
	for(int i = 1; i<= n; ++i){
		if(!v[i]) return 0;
	}
	int dem = 0;
	for(int i = 1; i<= n; ++i){
		if(ke[i].size() &1) dem++;
	}
	if(dem == 0) return 1;
	else if(dem <= 2) return 2;
	else return 0;
}
void euler_Cycle(int s){
	stack<int> st;
	stack<int> ce;
	st.push(s);
	while(!st.empty()){
		int tmp = st.top();
		int check = true;
		for(int i = 1; i<= n; ++i){
			if(a[tmp][i] == 1){
				st.push(i);
				a[tmp][i] = 0;
				a[i][tmp] = 0;
				check = false;
				break;
			}
		}
		if(check){
			st.pop();
			ce.push(tmp);
		}
	}
	while(!ce.empty()){
		cout<< ce.top()<<' ';
		ce.pop();
	}
}
int main(){
// 	freopen("CT.in", "r", stdin);
// 	freopen("CT.out", "w", stdout);
	int t;
	cin>> t;
	if(t == 1){
		cin>> n>> m;
		for(int i = 0; i<m; ++i){
			int x, y; cin>> x>> y;
			ke[x].pb(y);
			ke[y].pb(x);
		}
		cout<< dfs(1);
	}
	else{
		cin>> n>> m;
		cin>> u;
		for(int i = 1; i<= m; ++i){
			int x, y; cin>> x>> y;
			a[x][y] = 1;
			a[y][x] = 1;
		}
		euler_Cycle(u);
	}
}