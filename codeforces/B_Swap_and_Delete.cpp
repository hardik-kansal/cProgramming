#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
string s;
cin>>s;
int a=0,b=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='0'){a++;}
    else{b++;}
}
if(a>=b){cout<<a-b<<endl;}
else{cout<<b-a<<endl;}


    }}