#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;cin>>n;
int sum=0;
bool check=false;
for(int i=0;i<n;i++){
    int x;cin>>x;
    if(!check && x!=i){sum=x;check=true;}
    if(x!=i)sum&=x;
    }
cout<<sum<<endl;
     
    }}

