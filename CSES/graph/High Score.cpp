#include <bits/stdc++.h>
using namespace std;

const long long MINF = -4e18;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<long long>> edges;
    vector<vector<int>> adj(n + 1); // adjacency list for propagation
    for (int i = 0; i < m; i++) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
        adj[u].push_back(v);
    }

    vector<long long> dist(n + 1, MINF);
    dist[1] = 0;

    // Bellman-Ford: Relax edges n-1 times
    for (int i = 1; i <= n - 1; i++) {
        for (auto &e : edges) {
            int u = e[0], v = e[1];
            long long w = e[2];
            if (dist[u] != MINF && dist[u] + w > dist[v]) {
                dist[v] = dist[u] + w;
            }
        }
    }

    // Detect positive cycles
    vector<int> affected(n + 1, 0);
    for (auto &e : edges) {
        int u = e[0], v = e[1];
        long long w = e[2];
        if (dist[u] != MINF && dist[u] + w > dist[v]) {
            affected[v] = 1;
        }
    }

    // Propagate cycle influence using BFS
    queue<int> q;
    for (int i = 1; i <= n; i++) if (affected[i]) q.push(i);

    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (!affected[v]) {
                affected[v] = 1;
                q.push(v);
            }
        }
    }

    if (affected[n]) {
        cout << -1 << "\n"; // infinite score reachable
    } else {
        cout << dist[n] << "\n"; // longest path
    }
}
