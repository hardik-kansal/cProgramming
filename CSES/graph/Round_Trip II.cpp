#include<bits/stdc++.h>
using namespace std;
vector<int> grid[100007];
int s=-1;
int e=-1;
vector<int> vis(100007,0);
vector<int> parent(100007,0);
int n;
void dfs(int src,int par,vector<int> &rec){
    vis[src]=1;
    parent[src]=par;
    rec[src]=1;
    for(auto &val:grid[src]){
        if(!vis[val]){
        dfs(val,src,rec);
        if(s!=-1)return;
        }
        else if(rec[val]){
            parent[val]=src;
            e=src;
            s=val;
            return;
        }
    }
    // rec[src]=0;
}
int main(){
int m;cin>>n>>m;
for(int i=0;i<m;i++){
    int a;int b;
    cin>>a>>b;
    grid[a].push_back(b);
}
vector<int> rec(n+1,0);
for(int i=1;i<=n;i++){
    if(s!=-1)break;
    if(!vis[i]){
        dfs(i,-1,rec);
        rec.assign(n+1,0);
    }
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
    reverse(ans.begin(),ans.end());
    for(auto &val:ans)cout<<val<<' ';
    cout<<endl;
}
else cout<<"IMPOSSIBLE"<<endl;
}