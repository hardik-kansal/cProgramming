#include <bits/stdc++.h>
using namespace std;
int n, m;
const int N=200005;
const int LOG=20;

vector<vector<int>> adj(N);
vector<long long> len(N,0);
vector<long long> lev(N,0);
vector<long long> ans(N,0);
vector<vector<int>> up(N,vector<int>(LOG,0));

void dfs(int src,int par){
    long long count=0;
    for(auto &child:adj[src]){
        if(child!=par){
            dfs(child,src);
            count+=ans[child];
        }
    }
    ans[src]=count+len[src];
}
int jump(int x,int k){
    for(int j=0;j<LOG;j++){
        if(k& (1<<j))x=up[x][j];
    }
    return x;
}
int lca(int x,int y){
    if(lev[y]<lev[x])swap(x,y);
    y=jump(y,lev[y]-lev[x]);
    if(x==y)return x;
    for(int j=LOG-1;j>=0;j--){
        if(up[x][j]!=up[y][j]){
            x=up[x][j];y=up[y][j];
        }
    }
    return up[x][0];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n>>m;

    for(int i=0; i<n-1; i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> parent(n+1, -1);
    lev[1] = 1;
    queue<int> q;
    q.push(1);
    parent[1] = 0;
    
    while(!q.empty()){
        int node=q.front();q.pop();
        for(auto &child:adj[node]){
            if(child != parent[node]){
                parent[child] = node;
                up[child][0]=node;
                lev[child] = lev[node] + 1;
                q.push(child);
            }
        }
    }    
    for(int j=1;j<LOG;j++){
        for(int i=1;i<=n;i++){
            up[i][j]=up[up[i][j-1]][j-1];
        }
    }
    for(int i=0;i<m;i++){       
        int x,y;cin>>x>>y;
        int node = lca(x, y);
        len[x]++;
        len[y]++;
        len[node]--;
        if(up[node][0] != 0) len[ up[node][0] ]--;
    }
    dfs(1,-1);

    for(int i=1;i<=n;i++)cout<<ans[i]<<' ';
    cout<<endl;

}
