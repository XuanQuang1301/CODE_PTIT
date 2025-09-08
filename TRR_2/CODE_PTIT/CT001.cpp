#include <bits/stdc++.h>
using namespace std;
vector<int> adj[105];
vector<vector<int>> ans(105, vector<int> (105, 0));
set<int> A[105];
int n, m, u;
vector<bool> vs;
void dfs(int u){
	vs[u] = true;
	for(int i : adj[u]){
		if(!vs[i]){
			dfs(i);
		}
	}
}
int check1(){
	vs.assign(n + 1, false);
	dfs(1);
	for(int i = 1; i <= n; i++){
		if(!vs[i]) return 0;
	}
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		cnt += (adj[i].size() % 2);
	}
	if(cnt == 0) return 1;
	if(cnt <= 2) return 2;
	return 0;
}
int main(){
	int t; cin >> t;
	if(t == 1){
		cin >> n >> m;
		
		for(int i = 1; i <= m; i++){
			int x, y; cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		cout << check1() << endl;
	}
	else{
		cin >> n >> m >> u;
		for(int i = 0; i < m; i++){
			int x, y; cin >> x >> y;
			A[x].insert(y);
			A[y].insert(x);
		}
		stack<int> st;
		st.push(u);
		vector<int> solve;
		while(!st.empty()){
			int x = st.top();
			if(!A[x].empty()){
				int y = *A[x].begin();
				A[y].erase(x);
				A[x].erase(y);
				st.push(y);
			}
			else{
				st.pop();
				solve.push_back(x);
			}
		}
		reverse(solve.begin(), solve.end());
		for(auto i : solve) cout << i << " ";
		cout << endl;
	}
}