#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
int t;cin>>t;while(t--){
ll n;cin>>n;string s;cin>>s;
ll a=0;ll b=0;
for(int i=0;i<n;i++){if(s[i]=='0')a++;else b++;}
ll j=(b>=a)?-1:LLONG_MAX;
ll c0=0;ll c1=0;
for(int i=0;i<n;i++){
    if(s[i]=='0')c0++;else c1++;
    if(c0>=c1 && (b-c1)>=(a-c0)){if(abs((n-2)/2.0-i)<abs((n-2)/2.0-j)){j=i;}}
}
cout<<j+1<<endl;
}}
 