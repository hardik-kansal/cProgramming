#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;cin>>n;ll a[n];for(int i=0;i<n;i++){cin>>a[i];}
sort(a,a+n);
int k=(n+1)/2-1;
int c=count(a+k,a+n,a[k]);
cout<<c<<endl;
  }}