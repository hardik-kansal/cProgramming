#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;
    int x;cin>>x;
    string s;cin>>s;
    int len=s.length();
    int left=0;int right=0;
    for(int i=x-1;i<len;i++){
        if(s[i]=='#'){right=len-i;break;}
    }
    for(int i=x-1;i>=0;i--){
        if(s[i]=='#'){left=i+1;break;}
    }
    if(left==right)cout<<left+1<<endl;
    else if(left>right){
        if(x!=len && s[x]=='.')right=len-x;
        cout<<min(left,right)+1<<endl;
    }
    else{
        if(x-1!=0 && s[x-2]=='.')left=x-1;
        cout<<min(left,right)+1<<endl;
    }













    }
}