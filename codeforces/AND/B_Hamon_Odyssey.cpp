#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;cin>>n;vector<ll> a(n);for(int i=0;i<n;i++){cin>>a[i];}
int count=0;
ll sum=0;
int total=0;
for(int i=0;i<n;i++){
if(sum==0)sum=a[i];
sum&=a[i];
if(sum==0)count++;

}
if(count==0){cout<<1<<endl;}
else cout<<count<<endl;


}    
    }


// AND operation never increases value either fixed or decrease.
// OR -> either fixed or increase
// XOR -> anything