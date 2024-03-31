#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;cin>>n;string s;cin>>s;
unordered_set<int> set1;
int f[26]={0};
for(int i=0;i<n;i++){
    f[int(s[i])-97]++;
set1.insert(s[i]);
}
int max=set1.size();
set<int> set2;
unordered_set<int> set3;

for(int i=0;i<n;i++){
    f[int(s[i])-97]--;
    set3.insert(s[i]);
    if(f[int(s[i])-97]==0){max--;}
    set2.insert(max+set3.size());
    
}
cout<<*(set2.rbegin())<<endl;   
    }}

