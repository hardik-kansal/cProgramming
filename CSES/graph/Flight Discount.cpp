#include <bits/stdc++.h>
using namespace std;
vector<pair<int,long long>> grid[100007];
long long dist[100007][2];
int main(){
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;long long c;cin>>a>>b>>c;
        grid[a].push_back({b,c});
    }
    set<tuple<long long,int,bool>> s;
    s.insert({0,1,0});
    for(int i=1;i<=n;i++){
        dist[i][0]=dist[i][1]=1e15;
    }
    dist[1][0]=0;

    while(!s.empty()){
        auto [len, node, check] = *s.begin();
        if(node==n){cout<<len<<endl;break;}
        s.erase(s.begin());
        if(len>dist[node][check])continue;
        for(auto &val:grid[node]){
            auto [child,c]=val;
                if(!check){
                    if(len+c/2<dist[child][!check]){s.insert({len+c/2,child,!check});dist[child][!check]=len+c/2;}
                }
                if(len+c<dist[child][check]){s.insert({len+c,child,check});dist[child][check]=len+c;}
        }
    }
}