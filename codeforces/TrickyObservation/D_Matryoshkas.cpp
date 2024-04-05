#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
ll n;cin>>n;map<ll,ll> map1;for(int i=0;i<n;i++){ll x;cin>>x;map1[x]++;}
ll count=map1.begin()->second;
map<ll,ll> ::iterator it;
ll current=0;ll next=0;
for(it=map1.begin();it!=map1.end();it++){
current=it->first;
next=(map1.upper_bound(current))==map1.end()?current:map1.upper_bound(current)->first;
if(next==current)break;
ll diff=(map1.upper_bound(current)->second)-(it->second);
if(next==current+1){if(diff>0)count+=diff;}
else{count+=map1.upper_bound(current)->second;}
} 
cout<<count<<endl;
    
    
    
    
    
    
    
    
    }}
