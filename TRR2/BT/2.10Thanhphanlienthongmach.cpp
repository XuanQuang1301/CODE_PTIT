#include <bits/stdc++.h>

using namespace std;

const int maxN = 100010;

int n, m;
int timeDfs = 0, scc = 0;
int low[maxN], num[maxN];
bool deleted[maxN];
vector<int> g[maxN];
stack<int> st;
vector<vector<int>> sccList;

void dfs(int u) {
    num[u] = low[u] = ++timeDfs;
    st.push(u);

    for (int v : g[u]) {
        if (deleted[v]) continue;

        if (!num[v]) {
            dfs(v);
            low[u] = min(low[u], low[v]);
        } else {
            low[u] = min(low[u], num[v]);
        }
    }

    if (low[u] == num[u]) {
        scc++;
        vector<int> component;
        int v;
        do {
            v = st.top();
            st.pop();
            deleted[v] = true;
            component.push_back(v);
        } while (v != u);
        sccList.push_back(component);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
    }

    for (int i = 1; i <= n; i++)
        if (!num[i]) dfs(i);

    cout << scc << endl;
    int a[maxN];
    reverse(sccList.begin(),sccList.end());
    for (auto &component : sccList) {
        int i=0;
        for (int v : component) {
            a[i]=v;
            i++;
        }
        for(int j=i-1;j>=0;j--){
            cout<<a[j]<<" ";
        }
        cout << endl;
    }
}
