#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
     ll a,b,c;cin>>a>>b>>c;
     if(b%3==1){if(c<2){cout<<-1<<endl;continue;}}   
     if(b%3==2){if(c<1){cout<<-1<<endl;continue;}}
     int k=0;
     if((b%3+c)%3!=0)k=1;
     cout<<a+b/3+(b%3+c)/3+k<<endl;
 }}