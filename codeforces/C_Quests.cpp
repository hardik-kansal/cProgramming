#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
int n,k;cin>>n>>k;
vector<ll> a(n);
vector<ll> b(n);
for(int i=0;i<n;i++){cin>>a[i];}
for(int i=0;i<n;i++){cin>>b[i];}
ll sum=0;
ll m=0;
ll M=0;
for(int i=0;i<n;i++){
    if((k-i-1)<0)break;
    sum+=a[i];
    m=max(m,b[i]);
    M=max(M,sum+(k-i-1)*m);
}
cout<<M<<endl;
  }}

