#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;
    vector<int> h(107,0);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x!=-1)h[x]++;
    }
    int count=0;
    bool check=true;
    for(int i=0;i<107;i++){
        if(h[i])count++;
        if(count>1){cout<<"NO"<<endl;check=false;break;}
    }
    if(check && !h[0])cout<<"YES"<<endl;
    else if(check)cout<<"NO"<<endl;


    }
}