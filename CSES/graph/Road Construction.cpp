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
        int a,b;
        cin>>a>>b;
        grid.push_back({a,b});
    }
    parent.assign(n+1,0);
    for(int i=1;i<=n;i++)parent[i]=i;
    s.assign(n+1,1);
    int c=0;
    int mx=1;
    for(auto &val:grid){
        int a=val[0];
        int b=val[1];
        if(find(a)!=find(b)){
            Union(a,b);
            c++;
            mx=max(mx,s[find(a)]);
        }
        cout<<n-c<<' '<<mx<<endl;
    }

}