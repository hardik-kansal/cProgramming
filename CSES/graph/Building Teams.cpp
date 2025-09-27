#include<bits/stdc++.h>
using namespace std;
vector<int> grid[100007];
vector<int> ans(100007,0);
vector<int> vis(100007,0);
bool dfs(int src,int cat){
    vis[src]=1;
    ans[src]=cat;
    for(auto &val:grid[src]){
        if(vis[val]==0){
            if(!dfs(val,(cat==1)*cat+1))return false;
        }
        else {
            if(ans[val]!=(cat==1)*cat+1)return false;
        }
    }
return true;
}
int main(){
int n,m;cin>>n>>m;
for(int i=0;i<m;i++){
    int a;int b;
    cin>>a>>b;
    grid[a].push_back(b);
    grid[b].push_back(a);
}
bool check=true;
for(int i=1;i<=n;i++){
    if(vis[i]==0)check&=dfs(i,1);
}
if(check){
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<' ';
    }
    cout<<endl;
}
else cout<<"IMPOSSIBLE"<<endl;




}