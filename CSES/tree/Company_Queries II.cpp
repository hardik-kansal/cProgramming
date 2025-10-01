#include <bits/stdc++.h>
using namespace std;

const int LOG = 20; // log2(2e5) < 18, so 20 is safe
int n, q;
vector<vector<int>> up;
vector<int> depth;
vector<vector<int>> adj;

void dfs(int u, int parent) {
    up[u][0] = parent;
    for (int j = 1; j < LOG; j++) {
        if (up[u][j-1] != -1)
            up[u][j] = up[up[u][j-1]][j-1];
    }
    for (int v : adj[u]) {
        if (v != parent) {
            depth[v] = depth[u] + 1;
            dfs(v, u);
        }
    }
}

int lca(int a, int b) {
    if (depth[a] < depth[b]) swap(a, b);

    // Lift a up to same depth as b
    int diff = depth[a] - depth[b];
    for (int j = LOG-1; j >= 0; j--) {
        if (diff & (1 << j)) {
            a = up[a][j];
        }
    }

    if (a == b) return a;

    // Lift both a and b up until their parents match
    for (int j = LOG-1; j >= 0; j--) {
        if (up[a][j] != up[b][j]) {
            a = up[a][j];
            b = up[b][j];
        }
    }

    return up[a][0];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> q;
    adj.assign(n+1, {});
    up.assign(n+1, vector<int>(LOG, -1));
    depth.assign(n+1, 0);

    // Build tree
    for (int i = 2; i <= n; i++) {
        int boss;
        cin >> boss;
        adj[boss].push_back(i);
        adj[i].push_back(boss);
    }

    // Root is employee 1 (general director)
    dfs(1, -1);

    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << lca(a, b) << "\n";
    }
    return 0;
}
