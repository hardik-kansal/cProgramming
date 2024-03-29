#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;cin>>n;ll f,a,b;cin>>f>>a>>b;
ll m[n];for(int i=0;i<n;i++){cin>>m[i];}
for(int i=1;i<n;i++){
    f-=min(a*(m[i]-m[i-1]),b);
}
f-=min(a*(m[0]-0),b);
if(f>0){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}
 }}