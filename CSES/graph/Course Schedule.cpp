#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    vector<int> indegree(n + 1, 0);

    // Input edges
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v; // edge u -> v
        adj[u].push_back(v);
        indegree[v]++;
    }

    queue<int> q;
    vector<int> topo;

    // Nodes with indegree 0
    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0) q.push(i);
    }

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        topo.push_back(u);

        for (int v : adj[u]) {
            indegree[v]--;
            if (indegree[v] == 0) q.push(v);
        }
    }

    if ((int)topo.size() != n) {
        cout << "IMPOSSIBLE\n"; // cycle exists
    } else {
        for (int x : topo) cout << x << " ";
        cout << "\n";
    }
}
