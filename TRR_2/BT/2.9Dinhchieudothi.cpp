#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> do_thi;

void dfs(int u, vector<bool>& visited, vector<vector<bool>>& edge_processed, vector<pair<int, int>>& edges) {
    for (int v : do_thi[u]) {
        if (!edge_processed[u][v] && !edge_processed[v][u]) {
            if (!visited[v]) {
                edge_processed[u][v] = true;
                edges.emplace_back(u, v);
                visited[v] = true;
                dfs(v, visited, edge_processed, edges);
            } else {
                edge_processed[u][v] = true;
                edges.emplace_back(u, v);
            }
        }
    }
}

bool check(int u, int visited[]) {
    visited[u] = 1;
    for (int v : do_thi[u]) {
        if (visited[v] == 1) {
            return true;
        } else if (visited[v] == 0 && check(v, visited)) {
            return true;
        }
    }
    visited[u] = 2;
    return false;
}

bool kt(int n) {
    int visited[1001] = {0};
    for (int i = 1; i <= n; i++) {
        if (visited[i] == 0) {
            if (check(i, visited)) return true;
        }
    }
    return false;
}

int main() {
    int t, n, m;
    cin >> t >> n >> m;
    do_thi.assign(n+1, vector<int>());
    if (t == 1) {
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            do_thi[x].push_back(y);
            do_thi[y].push_back(x);
        }
        if (kt(n)) cout << 1;
        else cout << 0;
    } else if (t == 2) {
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            do_thi[x].push_back(y);
            do_thi[y].push_back(x);
        }
        for (int i = 1; i <= n; i++) {
            sort(do_thi[i].begin(), do_thi[i].end());
        }
        vector<vector<bool>> edge_processed(n+1, vector<bool>(n+1, false));
        vector<bool> visited(n+1, false);
        vector<pair<int, int>> edges;
        visited[1] = true;
        dfs(1, visited, edge_processed, edges);
        sort(edges.begin(), edges.end());
        cout << n << " " << m << endl;
        for (auto& p : edges) {
            cout << p.first << " " << p.second << endl;
        }
    }
    return 0;
}