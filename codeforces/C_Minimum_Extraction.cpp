#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;cin>>n;
       
       long long int a[n];
       bool check=true;
       for(int i=0;i<n;i++){cin>>a[i];
       if(a[i]!=a[0]){check=false;}}
       if(n==1 || check){cout<<a[0]<<endl;continue;}
       sort(a,a+n);
       cout<<a[n-1]-a[n-2]<<endl;
    }}