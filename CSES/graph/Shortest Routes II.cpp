#include <bits/stdc++.h>
using namespace std;
long long N=1e15;
long long grid[507][507]={N};
int main(){
    int n,m,q;cin>>n>>m>>q;
    for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
            grid[i][j] = (i==j ? 0 : N);
        }
    }
    for(int i=0;i<m;i++){
        int a,b;long long c;cin>>a>>b>>c;
        grid[a][b]=min(grid[b][a],c);
        grid[b][a]=min(grid[a][b],c);
    }

    for(int k=1;k<=n;k++){
    for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(grid[i][k]!=1e15 && grid[k][j]!=1e15){
            grid[i][j]=min(grid[i][j],grid[i][k]+grid[k][j]);
        }
    }}}
    for(int i=0;i<q;i++){
        int a,b;cin>>a>>b;
        if(grid[a][b]!=1e15)cout<<grid[a][b];
        else cout<<-1;
        cout<<endl;
    }
    cout<<endl;
}