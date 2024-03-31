#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
int n,k;cin>>n>>k;
string s;cin>>s;
int a[26]={0};int b[26]={0};
for(int i=0;i<n;i++){
   if(s[i]>=97){a[int(s[i])-97]++;} 
   else{b[int(s[i])-65]++;}
}
int sum=0;
int i=0;
while(i<=25){
if(abs(a[i]-b[i])>1){
if((k-abs(a[i]-b[i])/2)>=0){
    sum+=abs(a[i]-b[i])/2;k-=abs(a[i]-b[i])/2;}
    else if(k>0){sum+=k;k=0;}
}
sum+=min(a[i],b[i]);i++;
    }
cout<<sum<<endl;
}}

