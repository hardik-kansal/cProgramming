#include <bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
const int MAX = 1e5+7;

int n, m;
vector<int> g[MAX];
int ways[MAX];
int indeg[MAX];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for(int i=0; i<m; i++) {
        int x, y; cin >> x >> y;
        g[x].push_back(y);
        indeg[y]++;
    }

    ways[1] = 1;

    queue<int> q;
    
    for(int i=1; i<=n; i++) {
        if(indeg[i] == 0) q.push(i);
    }

    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(int v : g[u]) {
            ways[v] = (ways[v] + ways[u]) % M;
            indeg[v]--;
            if(indeg[v] == 0) {
                q.push(v);
            }
        }
    }

    cout << ways[n] << "\n";
}
