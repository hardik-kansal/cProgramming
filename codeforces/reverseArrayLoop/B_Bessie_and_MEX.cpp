#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
ll n;cin>>n;
ll a[n]={0};
ll p[n]={0};
for(int i=0;i<n;i++){cin>>a[i];}

p[n-1]=n-a[n-1];
ll k=p[n-1];
for(int i=n-2;i>=0;--i){
    p[i]=k-a[i];
    k=min(p[i],k);

}

for(int i=0;i<n;i++){
    cout<<p[i]<<' ';
}
cout<<endl;
     
    }}