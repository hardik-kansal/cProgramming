#include <bits/stdc++.h>
using namespace std;
vector<pair<int,long long>> grid[100007];
const long long M=1e15;
const long long MOD=1e9+7;

vector<long long> dist(100007,M);
vector<int> ways(100007,0);
vector<int> maxStops(100007,0);
vector<int> minStops(100007,100007);



int main(){
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;long long c;cin>>a>>b>>c;
        grid[a].push_back({b,c});
    }
    set<tuple<long long,int,int>> s;
    s.insert({0,0,1});
    dist[1]=0;
    ways[1]=1;
    minStops[1]=0;
    maxStops[1]=0;

    while(!s.empty()){
        auto [len,stops,node]=*s.begin();
        s.erase(s.begin());
        if(node==n)break;
        if(len>dist[node])continue;
        for(auto &val:grid[node]){
            auto [child,c]=val;
            if(dist[child]>len+c){
                s.insert({len+c,stops+1,child});
                dist[child]=len+c;
                ways[child]=ways[node];
                minStops[child]=minStops[node]+1;             
                maxStops[child]=maxStops[node]+1;             

            }
            else if (dist[child]==len+c){
                ways[child]=(1LL*ways[child]+ways[node])%MOD;
                maxStops[child]=max(maxStops[child],maxStops[node]+1);
                minStops[child]=min(minStops[child],minStops[node]+1);
            }           
        }
    }

    cout<<dist[n]<<' '<<ways[n]<<' '<<minStops[n]<<' '<<maxStops[n];
    cout<<endl;
}