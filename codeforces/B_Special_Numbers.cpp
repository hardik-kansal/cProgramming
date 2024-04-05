#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N=1e9+7;
int main(){
    int t;
    cin>>t;
    while(t--){
ll n,k;cin>>n>>k;
ll sum=0;
ll p=1;
for(int j=0;j<32;j++){
if(k & 1<<j){sum+=p;}
sum=sum%N;
p=(p%N)*(n%N);
}
cout<<sum<<endl;
}}

