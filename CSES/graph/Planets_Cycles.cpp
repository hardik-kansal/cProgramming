#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
int n;
int nxt[N];
int ans[N];
int vis[N]; // 0=unvisited, 1=visiting, 2=processed

void dfs(int u){
    vis[u]=1;
    int v=nxt[u];
    if(vis[v]==0){
        dfs(v);
        if(ans[u]==0) ans[u]=ans[v]+1;
    }
    else if(vis[v]==1){
        // found a cycle
        vector<int> cyc;
        int x=v;
        do{
            cyc.push_back(x);
            x=nxt[x];
        }while(x!=v);
        int len=cyc.size();
        for(int node:cyc) ans[node]=len;
    }
    else{ // vis[v]==2
        ans[u]=ans[v]+1;
    }
    vis[u]=2;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;
    for(int i=1;i<=n;i++) cin>>nxt[i];
    for(int i=1;i<=n;i++){
        if(vis[i]==0) dfs(i);
    }
    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    cout<<endl;
}
