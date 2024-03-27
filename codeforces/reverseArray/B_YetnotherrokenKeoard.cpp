#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
string s;cin>>s;
string s1;
int k=s.length();
int b=0,B=0;
for(int i=k-1;i>=0;i--){
    if(s[i]=='B'){B++;}
    else if(s[i]=='b'){b++;}
    else{
        if(b && s[i]>=97){b--;}
        else if(B && s[i]<97){B--;}
        else{
            s1.push_back(s[i]);
        }
    }
}
reverse(s1.begin(),s1.end());
cout<<s1<<endl;






    }}