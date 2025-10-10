#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g, gr;
vector<int> vis, comp;
stack<int> order;
void dfs1(int u) {
    vis[u] = 1;
    for (int v : g[u])
        if (!vis[v]) dfs1(v);
    order.push(u); // finishing order
}

void dfs2(int u) {
    vis[u] = 1;
    comp.push_back(u);
    for (int v : gr[u])
        if (!vis[v]) dfs2(v);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    g.assign(n+1, {});
    gr.assign(n+1, {});
    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        gr[b].push_back(a);
    }

    vis.assign(n+1, 0);
    for (int i=1; i<=n; i++)
        if (!vis[i]) dfs1(i);

    vis.assign(n+1, 0);
    int k=0;
    vector<int> ans(n+1,0);
    while(!order.empty()){
        int u=order.top();
        order.pop();
        if (!vis[u]) {
            comp.clear();
            dfs2(u);
            k++;
            for(auto &val:comp){
                ans[val]=k;
            }
        }
    }

    cout << k<< endl;
    bool check=false;
    for (auto &c : ans) {
        if(!check){check=true;continue;}
        cout<<c<<' ';
    }
    cout<<endl;
}
