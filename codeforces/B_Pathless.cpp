#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
int n,s;cin>>n>>s;int total=0;
int z=0;int one=0;int two=0;
for(int i=0;i<n;i++){
int x;cin>>x;
if(x==0)z++;
if(x==1)one++;
if(x==2)two++;
total+=x;
}
if(abs(s-total)==1 || total-s>=2){
while(z--)cout<<0<<' ';
while(two--)cout<<2<<' ';
while(one--)cout<<1<<' ';
cout<<endl;
}
else cout<<-1<<endl;


}
}
