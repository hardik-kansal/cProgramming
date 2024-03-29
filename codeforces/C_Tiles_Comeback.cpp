#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int n,k;cin>>n>>k;int a[n];
        int c[n+7]={0};
for(int i=0;i<n;i++){cin>>a[i];c[a[i]]++;}
if(a[0]==a[n-1]){if(c[a[0]]>=k)cout<<"YES"<<endl;else{cout<<"NO"<<endl;}continue;}
bool check=false;
int l=0;
int r=0;
bool check1=false;
for(int i=0;i<n;i++){
    if(a[i]==a[0] && !check){l++;if(l>=k)check=true;}
    if(check && a[i]==a[n-1]){r++;if(r>=k){cout<<"YES"<<endl;check1=true;break;}}
}
if(!check1)cout<<"NO"<<endl;
 }}