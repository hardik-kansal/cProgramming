#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<tuple<int,int,long long>> edges(m); 
    for(int i = 0; i < m; i++) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        edges[i] = {u, v, w};
    }
    vector<long long> dist(n + 1, 0);
    vector<int> parent(n + 1, -1);

    // Relax edges n-1 times
    for (int i = 0; i < n-1; i++) {
        for (auto &e : edges) {
            auto [u,v,w]=e;
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                parent[v]=u;
            }
        }
    }
    int node=-1;
    for (auto &e : edges) {
        auto [u,v,w]=e;
        if (dist[v] > dist[u] + w) {
            node=v;
            parent[v]=u;
        }
    }


    if (node == -1) {
        cout << "NO" << endl;
    } else {
        
        int y = node;
        for (int i = 0; i < n; i++) y = parent[y]; 

        vector<int> cycle;
        int cur = y;
        do {
            cycle.push_back(cur);
            cur = parent[cur];
        } while (cur != y);
        cycle.push_back(y);
        reverse(cycle.begin(), cycle.end());

        cout << "YES"<<endl;
        for (auto &v : cycle) cout << v << " ";
        cout << endl;
    }
}
