#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool solve(ll n1,ll m1,ll m){
    if(n1==m || m1==m){return true;}
    if(n1%3==0 && solve(n1/3,n1-n1/3,m)){return true;}
    else if(m1%3==0){return solve(m1/3,m1-m1/3,m);}
    else{
        return false;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
ll n,m;cin>>n>>m;
bool ans=false;
if(n==m)ans=true;
else if(n>m){
    if(n%3==0){ans=solve(n/3,n-n/3,m);
}
}
if(ans)cout<<"YES";else{cout<<"NO";}
cout<<endl;

        
    }}