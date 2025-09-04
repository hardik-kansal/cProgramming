#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e5+7;

int n, m;
vector<int> g[MAX];
vector<int> parent;
vector<int> vis;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for(int i=0; i<m; i++) {
        int x, y; cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);

    }

    parent.assign(n+1,0);
    vis.assign(n+1,0);
    int last=-1;
    int len=-1;
    for(int i=0;i<=n;i++)parent[i]=i;
    queue<pair<int,int>> q;
    q.push({1,0});
    vis[1]=1;
    while(!q.empty()) {
        auto [node,level] = q.front();
        q.pop();
        if(node==n){len=level;last=node;break;}
        for(int &child: g[node]) {
           if(!vis[child]){q.push({child,level+1});vis[child]=1;parent[child]=node;}
        }
    }
    if(last==-1)cout<<"IMPOSSIBLE"<<endl;
    else{
        cout<<len+1<<endl;
        vector<int> ans;
        while(parent[last]!=last){
            ans.push_back(last);
            last=parent[last];
        }
        ans.push_back(last);
        reverse(ans.begin(),ans.end());
        for(auto &val:ans)cout<<val<<' ';
        cout<<endl;
    }
}
