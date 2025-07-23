#include<bits/stdc++.h>
using namespace std;

void make(int node,vector<int> &parent,vector<int> &s){
    if(parent[node]!=-1)return;
    parent[node]=node;
    s[node]=1;
}
int find(int node,vector<int> &parent){
    if(parent[node]==node)return node;
    else return parent[node]=find(parent[node],parent);
}

void Union(int a,int b,vector<int> &parent,vector<int> &s){
    int x=find(a,parent);
    int y=find(b,parent);
    if(x!=y){
        if(s[x]<s[y])swap(x,y);
        parent[y]=x;
        s[x]+=s[y];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
int n,m;cin>>n>>m;
vector<int> parent(n+1,-1);
vector<int> s(n+1,0);
for(int i=0;i<m;i++){
    int a,b;cin>>a>>b;
    make(a,parent,s);
    make(b,parent,s);
    Union(a,b,parent,s);
}
vector<int> a; 
int ans=0;
for(int i = 1; i <=parent.size(); i++) {
    make(i,parent,s);
    if(parent[i] == i) {ans++;a.push_back(i);}
}
cout<<ans-1<<endl;  
if(ans==1)return 0;
for(int i=1;i<a.size();i++){
cout<<a[i-1]<<' '<<a[i]<<endl;
}

}