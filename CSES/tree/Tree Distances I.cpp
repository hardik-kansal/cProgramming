#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> adj;

// DFS to compute distances from a given start
void dfs(int u, int parent, int dist, vector<int>& dists, int &farthestNode) {
    dists[u] = dist;
    if (farthestNode == -1 || dist > dists[farthestNode]) {
        farthestNode = u;
    }
    for (int v : adj[u]) {
        if (v != parent) {
            dfs(v, u, dist + 1, dists, farthestNode);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    adj.assign(n+1, {});
    for (int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    // Step 1: find one endpoint of diameter (A)
    vector<int> dist1(n+1, -1);
    int A = -1;
    dfs(1, -1, 0, dist1, A);

    // Step 2: find other endpoint of diameter (B) using DFS from A
    vector<int> distA(n+1, -1);
    int B = -1;
    dfs(A, -1, 0, distA, B);

    // Step 3: distances from B
    vector<int> distB(n+1, -1);
    int dummy = -1;
    dfs(B, -1, 0, distB, dummy);

    // Step 4: answer for each node = max(distA[node], distB[node])
    for (int i = 1; i <= n; i++) {
        cout << max(distA[i], distB[i]) << " ";
    }
    cout << "\n";

    return 0;
}
