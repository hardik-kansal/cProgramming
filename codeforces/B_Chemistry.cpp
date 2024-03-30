#include <bits/stdc++.h>
using namespace std;
using ll = long long;

    // OR JUST CHECK ##########   no of odd occurences > K+1 #######


int main(){
    int t;
    cin>>t;
    while(t--){
int n,k;cin>>n>>k;string s;cin>>s;
int c[27]={0};
for(int i=0;i<n;i++){
c[s[i]-97]++;
}
bool check=true;
int count=0;
int count2=k;
if((n-k)%2==0){
    for(int i=0;i<26;i++){
        if(c[i]%2!=0){count2--;}
        if(count2<0){check=false;break;}
    }
    if(count2%2!=0){check=false;}
}
else{
    for(int i=0;i<26;i++){
        if(c[i]%2!=0){count++;}
        if(count>k+1 && (n-k)!=1){check=false;break;}
    }  
    if((k-count)%2==0 && (n-k)!=1){check=false;}
}
if(n==1){cout<<"YES";}
else if(n==2 && s[0]==s[1]){cout<<"YES";}
else if(check)cout<<"YES";
else{cout<<"NO";}
cout<<endl;



        
    }}

