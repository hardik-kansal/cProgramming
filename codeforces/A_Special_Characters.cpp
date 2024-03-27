#include <bits/stdc++.h>
using namespace std;
int main(){
    int t=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2!=0){cout<<"NO"<<endl;}
        else{
        cout<<"YES"<<endl;
        string s;
        for(int i=0;i<n/2;i++){
            char k='A'+i;
            s.push_back(k);
            s.push_back(k);
        }
        cout<<s<<endl;
        }

    }
}