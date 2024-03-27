#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool check=false;
    for(int i=1;i<n-1;i++){
        if(a[i]>=2*a[i-1] && a[i-1]==min(a[i-1],a[i+1]) && a[i]!=0){
            int k=a[i-1];
            a[i]=a[i]-2*k;
            a[i-1]=0;
            a[i+1]-=k;
        }
}
for(int i=0;i<n;i++){
    if(a[i]!=0){
        cout<<"NO"<<endl;
        check=true;
        break;
    }
}
if(!check){
    cout<<"YES"<<endl;
}
}
}