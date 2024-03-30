#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
int q;cin>>q;
string s="";
ll a[q];
bool check=false;
bool check1=false;
ll k=0;
for(int i=0;i<q;i++){
    ll x;
    cin>>x;
    if(k==0){s.push_back('1');a[k]=x;k++;}
    else if(x>=a[k-1] && !check){s.push_back('1');a[k]=x;k++;}
    else{
        check=true;
        if(x<=a[0] && !check1){s.push_back('1');a[k]=x;check1=true;k++;}
        else if(x>=a[k-1] && x<=a[0] && check1){s.push_back('1');a[k]=x;k++;}
        else{s.push_back('0');}

    }
    }

cout<<s<<endl;
    }}