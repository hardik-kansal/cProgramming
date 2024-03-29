#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
string a,b;
cin>>a>>b;
int k=a.length();
int c1=0;
int c2=k-1;
for(int i=k-1;i>0;i--){
if(a[i]==b[i] && a[i]==0){
c1=i;break;
}
}
for(int i=k-2;i>0;i--){
if(a[i]==b[i] && a[i]==1){
c2=i;break;
}
}
if(c2-c1==1){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}



    }}