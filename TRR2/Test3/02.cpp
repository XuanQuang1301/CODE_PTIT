#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

struct Edge {
    int u, v, w;
};

int n, s, t;
vector<Edge> edges;
int dist[105], parent[105];

int main() {
    // freopen("BN.INP", "r", stdin);
    // freopen("BN.OUT", "w", stdout);
    cin >> n >> s >> t;
    // Đọc ma trận và tạo danh sách cạnh
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            int w;
            cin >> w;
            if (i != j && w != 10000) {
                edges.push_back({i, j, w});
            }
        }
    }
    // Khởi tạo khoảng cách
    for (int i = 1; i <= n; ++i) {
        dist[i] = INF;
        parent[i] = -1;
    }
    dist[s] = 0;
    // Bellman-Ford
    for (int i = 1; i <= n - 1; ++i) {
        for (const Edge& e : edges) {
            if (dist[e.u] != INF && dist[e.v] > dist[e.u] + e.w) {
                dist[e.v] = dist[e.u] + e.w;
                parent[e.v] = e.u;
            }
        }
    }
    // Kiểm tra chu trình âm
    for (const Edge& e : edges) {
        if (dist[e.u] != INF && dist[e.v] > dist[e.u] + e.w) {
            cout << -1 << '\n';
            return 0;
        }
    }
    // Không có đường đi
    if (dist[t] == INF) {
        cout << 0 << '\n';
        return 0;
    }

    // Truy vết đường đi
    vector<int> path;
    for (int v = t; v != -1; v = parent[v]) {
        path.push_back(v);
    }
    reverse(path.begin(), path.end());

    // In kết quả
    cout << dist[t] << '\n';
    for (int v : path) cout << v << ' ';
    cout << '\n';

    return 0;
}
