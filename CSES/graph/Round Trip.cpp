#include<bits/stdc++.h>
using namespace std;
vector<int> grid[100007];
int s=-1;
int e=-1;
vector<int> vis(100007,0);
vector<int> parent(100007,0);

// par needed since two or more distinct needed
void dfs(int src,int par){
    vis[src]=1;
    parent[src]=par;
    for(auto &val:grid[src]){
        if(!vis[val]){
            dfs(val,src);
            if(s!=-1)return;
        }
        else if(val!=par){
            parent[val]=src;
            e=src;
            s=val;
            return;
        }

    }
}
int main(){
int n,m;cin>>n>>m;
for(int i=0;i<m;i++){
    int a;int b;
    cin>>a>>b;
    grid[a].push_back(b);
    grid[b].push_back(a);
}
for(int i=1;i<=n;i++){
    if(s!=-1)break;
    if(!vis[i])dfs(i,-1);
}
if(s!=-1){
    vector<int> ans;
    ans.push_back(s);
    while(parent[e]!=s){
        ans.push_back(e);
        e=parent[e];
    }
    ans.push_back(e);
    ans.push_back(s);
    cout<<ans.size()<<endl;
    for(auto &val:ans)cout<<val<<' ';
    cout<<endl;
}
else cout<<"IMPOSSIBLE"<<endl;
}