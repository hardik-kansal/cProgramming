#include <bits/stdc++.h>
using namespace std;
vector<pair<int,long long>> grid[100007];
int main(){
    int n,m,k;cin>>n>>m>>k;
    for(int i=0;i<m;i++){
        int a,b;long long c;cin>>a>>b>>c;
        grid[a].push_back({b,c});
    }
    vector<long long> ans;
    vector<int> count(n+1,0);
    multiset<pair<long long,int>> s;
    s.insert({0,1});
    while(!s.empty()){
        auto [len,node]=*s.begin();
        count[node]++;
        s.erase(s.begin());
        if(node==n)ans.push_back(len);
        if(ans.size()==k)break;
        if(count[node]>k)continue;
        for(auto &val:grid[node]){
            auto [child,c]=val;
            s.insert({len+c,child});
        }
    }
    for(auto &val:ans)cout<<val<<' ';
    cout<<endl;
}