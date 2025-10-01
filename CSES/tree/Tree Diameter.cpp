#include <bits/stdc++.h>
using namespace std;

int farthestNode, maxDist;

void dfs(int u, int parent, int dist, vector<vector<int>> &adj) {
    if (dist > maxDist) {
        maxDist = dist;
        farthestNode = u;
    }
    for (int v : adj[u]) {
        if (v != parent) {
            dfs(v, u, dist + 1, adj);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<vector<int>> adj(n+1);
    for (int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // First DFS from node 1
    maxDist = -1;
    dfs(1, -1, 0, adj);
    int nodeX = farthestNode;

    // Second DFS from nodeX
    maxDist = -1;
    dfs(nodeX, -1, 0, adj);

    cout << maxDist << "\n";
}
