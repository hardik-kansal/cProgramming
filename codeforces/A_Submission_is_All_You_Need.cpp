#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
int total=0;
vector<int> h(51,0);
for(int i=0;i<n;i++){
    int x;cin>>x;
    h[x]++;
    total+=x;
}
if(!h[0])cout<<total<<endl;
else cout<<total+h[0]<<endl;
}
}