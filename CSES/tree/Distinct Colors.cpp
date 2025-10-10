#include <bits/stdc++.h>
using namespace std;
int n;
const int N=200005;
const int LOG=20;

vector<vector<int>> adj(N);
vector<long long> ans(N,0);
vector<int> col(N,0);


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for(int i=1;i<=n;i++){
        cin>>col[i];
    }
    for(int i=0; i<n-1; i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    

    for(int i=1;i<=n;i++)cout<<ans[i]<<' ';
    cout<<endl;
}