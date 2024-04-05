#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
int n,k;cin>>n>>k;
vector<ll> a(n+1,0);
vector<ll> b(n+1,0);
for(int i=0;i<2*n;i++){
    if(i<n){int x;cin>>x;a[x]++;}
    else{int x;cin>>x;b[x]++;}
} 
vector<ll> a1;
vector<ll> b1;
int k1=2*k;
int k2=2*k;
for(int i=1;i<n+1;i++){
    if(a[i]==2 && k1>1){a1.push_back(i);a1.push_back(i);k1-=2;}
    if(b[i]==2 && k2>1){b1.push_back(i);b1.push_back(i);k2-=2;}

}
for(int i=1;i<n+1;i++){
        if(a[i]==1 && k1>0){a1.push_back(i);k1--;}
        if(b[i]==1 && k2>0){b1.push_back(i);k2--;}
    }
for(int i=0;i<2*k;i++){cout<<a1[i]<<' ';}cout<<endl;
for(int i=0;i<2*k;i++){cout<<b1[i]<<' ';}cout<<endl;



        
    }}

