// ######################## IMPORTANT #######################

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
int n,k;cin>>n>>k;ll q;cin>>q;
int count=0;
ll res=0;
for(int i=0;i<n;i++){
    ll x;cin>>x;
    if(x<=q){
    count++;
    }
    else count=0;
    if(count>=k){res+=count-k+1;}
}
cout<<res<<endl;
        
    }}

 /// 1 2 3 4 5 -> total ways to get consecutive subarray of size atleast k 