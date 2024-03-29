#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int n=0;cin>>n;
int a[n];
int count=1;
int count1=1;

for(int i=0;i<n;i++){cin>>a[i];}
for(int i=1;i<n;i++){
    if(a[i]!=a[0]){break;}
    count++;
}
bool check=false;
int c=0;
for(int j=n-1;j>=count;j--){
    if(a[n-1]==a[0] && a[n-1]==a[j]){c++;check=true;}
    else{break;};
}
for(int k=n-2;k>=count;k--){
    if(a[k]!=a[n-1]){break;}
    count1++;  
}
count+=c;
if(check){cout<<n-count<<endl;}
else if(count>count1){cout<<n-count<<endl;}
else if(count<=count1){cout<<n-count1<<endl;}







    }}