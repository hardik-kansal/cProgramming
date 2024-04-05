#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;cin>>n;string s;cin>>s;
vector<ll> a(0);
for(int i=n-1;i>=0;i--){
 if(s[i]=='0')a.push_back(n-i);
}
ll sum=0;
for(int i=0;i<n;i++){
    if(i>=a.size())cout<<-1<<' ';
    else{sum+=a[i]-i-1;cout<<sum<<' ';}
}
cout<<endl;
  }}

