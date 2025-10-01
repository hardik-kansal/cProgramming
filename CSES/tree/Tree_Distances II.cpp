#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> grid;
vector<int> Count(200005,0);
vector<long long> sum(200005,0);
vector<long long> ans(200005,0);

pair<int,long long> dfs(int src,int par){
    int ct=0;long long sm=0;
    for(auto &val:grid[src]){
        if(val!=par){
            auto [c,s]=dfs(val,src);
            ct+=(c+1);
            sm+=(s+c+1);
        }
    }
    Count[src]=ct;
    sum[src]=sm;
    return {ct,sm};
}
void dfs1(int src,int par){
    for(auto &val:grid[src]){
        if(val!=par){
            ans[val] = ans[src] + (n - 2 * (Count[val] + 1));
            dfs1(val,src);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    grid.assign(n+1, {});
    for (int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        grid[a].push_back(b);
        grid[b].push_back(a);
    }
    dfs(1,-1);
    ans[1]=sum[1];
    dfs1(1,-1);
    for(int i=1;i<=n;i++)cout<<ans[i]<<' ';
    cout<<endl;

    
}
