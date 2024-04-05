#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
int n,q;cin>>n>>q;
vector<ll> a(n);for(int i=0;i<n;i++){cin>>a[i];}
ll min=30;
for(int i=0;i<q;i++){
    ll x;cin>>x;
    if(x>min)continue;
    for(int j=0;j<n;j++){
        if(a[j]%(1<<x)==0)a[j]+=(1<<(x-1));
    }    
    min=x-1;
    }
for(int i=0;i<n;i++)cout<<a[i]<<' ';
cout<<endl;
}}

