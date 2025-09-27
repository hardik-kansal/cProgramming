#include <bits/stdc++.h>
using namespace std;
vector<pair<int,long long>> grid[100007];
vector<long long> dis(100007,1e15);
int main(){
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;long long c;cin>>a>>b>>c;
        grid[a].push_back({b,c});
    }
    set<pair<long long,int>> s;
    s.insert({0,1});
    dis[1]=0;
    while(!s.empty()){
        auto [len,node]=*s.begin();
        s.erase(s.begin());
        if(len > dis[node]) continue;// imp 
        for(auto &val:grid[node]){
            auto [child,c]=val;
            if(len+c<dis[child]){
                s.insert({len+c,child});
                dis[child]=len+c;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<dis[i]<<' ';
    }
    cout<<endl;
}