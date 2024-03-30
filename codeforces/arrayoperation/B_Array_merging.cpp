#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;cin>>n;vector<int> a(n);vector<int> b(n);
unordered_set<int> x;
for(int i=0;i<n;i++){cin>>a[i];x.insert(a[i]);}
for(int i=0;i<n;i++){cin>>b[i];x.insert(b[i]);}
if(x.size()==2*n){cout<<1<<endl;continue;}
vector<int> fa(2*n+1,1);vector<int> fb(2*n+1,1);
int count1=0;
for(int i=1;i<n;i++){
    if(a[i]==a[i-1]){
        count1++;
        if(count1+1>fa[a[i]]){fa[a[i]]=count1+1;}
    }
    if(a[i]!=a[i-1]){count1=0;}
}
int count2=0;
for(int i=1;i<n;i++){
    if(b[i]==b[i-1]){
        count2++;
        if(count2+1>fb[b[i]]){fb[b[i]]=count2+1;}
    }
    if(b[i]!=b[i-1]){count2=0;}
}
for(int i=1;i<2*n+1;i++){
    fa[i]=fa[i]+fb[i];
}
sort(fa.begin(), fa.end(), greater<int>());
cout<<fa[1]<<endl;
}}





