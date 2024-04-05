#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;cin>>n;string s;cin>>s;
int count =0;
for(int i=0;i<n/2;i++){
if(s[i]!=s[n-i-1]){count++;}
}
int k=count;
if(n%2==0){
    for(int i=0;i<=n;i++){
        if(i<count){cout<<0;}
        else if(i>n-count){cout<<0;}
        else if(i==k){
            cout<<1;
            k+=2;
            }
        else cout<<0;
    }
}
else{
    for(int i=0;i<=n;i++){
        if(i<count){cout<<0;}
        else if(i>n-count){cout<<0;}
        else cout<<1;
    }
}

cout<<endl;
 }}

