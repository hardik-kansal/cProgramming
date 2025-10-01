#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> grid; 
vector<int> parent;
vector<int> s;

int find(int node){
    if(parent[node]==node)return node;
    return parent[node]=find(parent[node]);
}

void Union(int a,int b){
    int x=find(a);
    int y=find(b);
    if(x!=y){
        if(s[x]<s[y])swap(x,y);
        parent[y]=x;
        s[x]+=s[y];   
    }
}

int main(){
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b,w;
        cin>>a>>b>>w;
        grid.push_back({w,a,b});
    }
    parent.assign(n+1,0);
    for(int i=1;i<=n;i++)parent[i]=i;
    s.assign(n+1,1);
    sort(grid.begin(),grid.end());
    long long ans=0;
    for(auto &val:grid){
        int w=val[0];
        int a=val[1];
        int b=val[2];
        if(find(a)!=find(b)){
            Union(a,b);ans+=w;
        }
    }
    int c=0;
    for(int i=1;i<=n;i++){
        if(parent[i]==i)c++;
    }
    if(c==1)cout<<ans<<endl;
    else cout<<"IMPOSSIBLE"<<endl;

}