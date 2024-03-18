#include <bits/stdc++.h>
using namespace std;
vector<string> v;
vector<vector<int>> f;

// Brackets generate
void generate(string &s,int open,int close){
if(open==0 && close==0){
    v.push_back(s);
    return;
}
if(open>0){
    s.push_back('(');
    generate(s,open-1,close);
    s.pop_back();
}
if(close>0){
    if(open<close){
        s.push_back(')');
        generate(s,open,close-1);
        s.pop_back();
    }
}
}
// subsets generate
void generate(vector<int> &v,int i,vector<int> &v1){
    if(i>v.size()){
      f.push_back(v1);
      return;
    }
    generate(v,i+1,v1);
    v1.push_back(v[i]);
    generate(v,i+1,v1);
    v1.pop_back();
}






int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s="";
        generate(s,n,n);
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<endl;
        }
    }
}