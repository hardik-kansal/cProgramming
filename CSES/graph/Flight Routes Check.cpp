#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> g(n+1), gr(n+1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        gr[b].push_back(a); // reverse graph
    }

    // DFS forward from 1
    vector<int> vis(n+1, 0);
    stack<int> st;
    st.push(1);
    vis[1] = 1;
    while (!st.empty()) {
        int u = st.top(); st.pop();
        for (int v : g[u]) if (!vis[v]) {
            vis[v] = 1;
            st.push(v);
        }
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            cout << "NO\n" << 1 << " " << i << "\n";
            return 0;
        }
    }

    // DFS reverse from 1
    fill(vis.begin(), vis.end(), 0);
    st.push(1);
    vis[1] = 1;
    while (!st.empty()) {
        int u = st.top(); st.pop();
        for (int v : gr[u]) if (!vis[v]) {
            vis[v] = 1;
            st.push(v);
        }
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            cout << "NO\n" << i << " " << 1 << "\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}
