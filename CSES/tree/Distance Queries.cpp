#include <bits/stdc++.h>
using namespace std;
const int LOG=18;
vector<vector<int>> up(200005,vector<int>(LOG,0));
vector<int> len(200005,0);

int jump(int src,int k){
    for(int j=0;j<LOG;j++){
        if(k & (1<<j))src=up[src][j];
    }
    return src;
}
int lca(int a,int b){
    b=jump(b,len[b]-len[a]);
    if(a==b)return a;
    for(int j=LOG;j>=0;j--){
        if(up[a][j]!=up[b][j]){
            a=up[a][j];b=up[b][j];
        }
    }
    return up[a][0];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;int qs;cin>>n>>qs;
    vector<int> grid[200005];
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        grid[a].push_back(b);
        grid[b].push_back(a);
    }
    queue<int> q;
    q.push(1);
    len[1]=1;
    while(!q.empty()){
        int node=q.front();q.pop();
        for(auto &val:grid[node]){
            if(len[val]==0){
            len[val]=len[node]+1;
            up[val][0]=node;
            q.push(val);
            }
        }
    }
    for(int j=1;j<LOG;j++){
        for(int i=1;i<=n;i++){
            up[i][j]=up[up[i][j-1]][j-1];
        }
    }

    while(qs--){
        int a,b;cin>>a>>b;
        if(len[a]>len[b])swap(a,b);
        cout<<len[a]+len[b]-2*len[lca(a,b)]<<endl;
    }
}