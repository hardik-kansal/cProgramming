#include <bits/stdc++.h>
using namespace std;
using ll = long long;
unordered_set<ll> a;
unordered_set<ll> b;
unordered_set<ll> c;
int main(){
    int t;
    cin>>t;
    while(t--){
int n,m,k;cin>>n>>m>>k;


for(int i=0;i<n;i++){ll x;cin>>x;if(x<=k){a.insert(x);c.insert(x);}}
for(int i=0;i<m;i++){ll x;cin>>x;if(x<=k){b.insert(x);c.insert(x);}}
int c1=a.size();
int c2=b.size();
int c3=c.size();

if(c1>=k/2 && c2>=k/2 && c3>=k){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}
a.clear();b.clear();c.clear();
}}