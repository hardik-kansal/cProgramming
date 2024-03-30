#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
int a,b,c;cin>>a>>b>>c;
int max1=max(a,max(b,c));
if(a==b && a==c){cout<<1<<' '<<1<<' '<<1<<endl;}
else if((max1!=a && b==c) || (max1==a && a!=b && a!=c)){cout<<1<<' '<<0<<' '<<0<<endl;}
else if((max1!=b && a==c) || (max1==b && a!=b && b!=c)){cout<<0<<' '<<1<<' '<<0<<endl;}
else if((max1!=c && b==a) || (max1==c && c!=b && a!=c)){cout<<0<<' '<<0<<' '<<1<<endl;}

 }}