#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
ll n,x;cin>>n>>x;
vector<ll> a(n);
vector<ll> b(n);
vector<ll> c(n);
for(int i=0;i<n;i++){cin>>a[i];}
for(int i=0;i<n;i++){cin>>b[i];}
for(int i=0;i<n;i++){cin>>c[i];}
ll sum=0;
for(int i=0;i<n;i++){
if((a[i]|x)==x)sum|=a[i];
else break;
}
for(int i=0;i<n;i++){
if((b[i]|x)==x)sum|=b[i];
else break;
}
for(int i=0;i<n;i++){
if((c[i]|x)==x)sum|=c[i];
else break;
}
if(sum==x || x==0){cout<<"Yes"<<endl;}
else cout<<"No"<<endl;
        
    }}

