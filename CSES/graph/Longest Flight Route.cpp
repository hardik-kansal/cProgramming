#include <bits/stdc++.h>
using namespace std;
// const int M = 1e9+7;
const int MAX = 1e5+7;

int n, m;
vector<int> g[MAX];
int level[MAX];
int indeg[MAX];
vector<int> parent;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for(int i=0; i<m; i++) {
        int x, y; cin >> x >> y;
        g[x].push_back(y);
        indeg[y]++;
    }

    level[1] = 1;
    parent.assign(n+1,0);
    parent[1]=1;
    parent[n]=n;

    queue<int> q;
    
    for(int i=1; i<=n; i++) {
        if(indeg[i] == 0) q.push(i);
    }

    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(int v : g[u]) {
            if(level[v]<level[u]+1 && level[u]!=0){level[v] = level[u]+1;parent[v]=u;}
            indeg[v]--;
            if(indeg[v] == 0) {
                q.push(v);
            }
        }
    }
    if(parent[n]==n)cout<<"IMPOSSIBLE"<<endl;
    else{
        vector<int> ans;
        int last=n;
        while(parent[last]!=last){
            ans.push_back(last);
            last=parent[last];
        }
        cout<<level[n]<<endl;
        ans.push_back(last);
        reverse(ans.begin(),ans.end());
        for(auto &val:ans)cout<<val<<' ';
        cout<<endl;

    }
    
}
