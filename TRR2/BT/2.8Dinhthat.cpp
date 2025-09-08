#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100;
vector<int> adj[MAXN];
bool visited[MAXN];

void dfs(int u, int skip, int v, bool &reachable) {
    visited[u] = true;
    if (u == v) {
        reachable = true;
        return;
    }
    for (int neighbor : adj[u]) {
        if (neighbor != skip && !visited[neighbor]) {
            dfs(neighbor, skip, v, reachable);
        }
    }
}

int main() {
    int n, m, u, v;
    cin >> n >> m >> u >> v;
    for (int i = 0; i < m; ++i) {
        int ui, vi;
        cin >> ui >> vi;
        adj[ui].push_back(vi);
        adj[vi].push_back(ui);
    }

    vector<int> articulation_points;
    for (int s = 1; s <= n; ++s) {
        if (s == u || s == v) continue;
        memset(visited, false, sizeof(visited));
        bool reachable = false;
        dfs(u, s, v, reachable);

        if (!reachable) {
            articulation_points.push_back(s);
        }
    }
    cout << articulation_points.size() << "\n";
    for (int s : articulation_points) {
        cout << s << " ";
    }
    cout << "\n";

    return 0;
}
