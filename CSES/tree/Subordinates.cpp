#include <bits/stdc++.h>
using namespace std;
int n, m;
const int N=200005;
vector<int> ans(N,0);
vector<vector<int>> adj(N);

int dfs(int src){
    int count=1;
    for(auto &child:adj[src]){
        count+=dfs(child);
    }
    return ans[src]=count;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for(int i=0; i<n-1; i++){
        int a;cin>>a;
        adj[a].push_back(i+2);
    }
    dfs(1);
    for(int i=1;i<=n;i++)cout<<ans[i]-1<<' ';
    cout<<endl;

}
