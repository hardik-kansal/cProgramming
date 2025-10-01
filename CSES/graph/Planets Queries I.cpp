
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;cin>>n>>q;
    vector<vector<int>> up(n+1,vector<int>(31,0));
    for(int i=1;i<=n;i++){
        cin>>up[i][1];
    }
    for(int j=2;j<=30;j++){
        for(int i=1;i<=n;i++){
            up[i][j]=up[up[i][j-1]][j-1];
        }
    }
    for(int i=0;i<q;i++){
        int x,y;cin>>x>>y;
        for(int j=0;j<=29;j++){
            if(y & (1LL<<j))x=up[x][j+1];
        }
        cout<<x<<endl;
    }
}

