
#include <bits/stdc++.h>
using namespace std;
vector<int> len(200005,0);
vector<int> vis(200005,0);
vector<int> parent(200005,0);
vector<vector<int>> up(200005,vector<int>(31,0));


void dfs(int src){
    vis[src]=1;
    if(!vis[up[src][1]])dfs(up[src][1]);
    len[src]=len[up[src][1]]+1;
}
int jump(int x,int y){
    for(int j=0;j<=29;j++){
        if(y & (1LL<<j))x=up[x][j+1];
    }
    return x;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>up[i][1];
        parent[up[i][1]]=i;
    }
    
    for(int j=2;j<=30;j++){
        for(int i=1;i<=n;i++){
            up[i][j]=up[up[i][j-1]][j-1];
        }
    }

    for(int i=1;i<=n;i++){
        if(!vis[i])dfs(i);
    }


    for(int i=0;i<q;i++){
        int x,y;cin>>x>>y;
        int cycle_entry=jump(x,len[x]);
        int cycle_len=len[cycle_entry];
        if(len[x]>=len[y] && jump(x,len[x]-len[y])==y){
            cout<<len[x]-len[y]<<endl;
        }
        else if(jump(cycle_entry,cycle_len-len[y])==y){
                cout<<cycle_len-len[y]+len[x]<<endl;
        }
        else cout<<-1<<endl;       
    }


}

