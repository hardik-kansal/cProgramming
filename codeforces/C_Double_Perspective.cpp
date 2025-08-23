#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){

int n;cin>>n;
vector<vector<int>> s;
for(int i=0;i<n;i++){
    int a;int b;cin>>a>>b;
    s.push_back({a,b,i});
}
sort(s.begin(),s.end());
vector<int> ans;
vector<int> hash(30007,0);
for(int i=0;i<s.size();i++){
    vector<int> p=s[i];
    if(hash[p[1]])continue;
    hash[p[1]]++;
    ans.push_back(p[2]);
}
cout<<ans.size()<<endl;
for(auto &val:ans){
    cout<<val+1<<' ';
}
cout<<endl;















}
}
