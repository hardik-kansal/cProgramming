#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
long long int a,b=0;
cin>>a>>b;
long long int lcm=(a*b)/__gcd(a,b);
if(a==1){lcm=b*b;}
if(b==lcm){lcm=(b/a)*b;}
cout<<lcm<<endl;
}}