#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    long int N=1e5;
    while(t--){
int n=0;cin>>n;
int a[N];
for(int i=0;i<n;i++){
    cin>>a[i];
}
bool check1=false;
int N1=n*2;
for(int j=0;j<N1;j++){

    if(check1){
        cout<<"NO"<<endl;
        break;
    }
    bool check=false;
    for(int i=0;i<n-1;i++){

    if(a[i]>a[i+1]){
        check=true;
        int l=a[i]%10;
        int h=a[i]/10;
        if(a[i+1]<l || l<h){
            check1=true;
            break;
        }
        a[i]=h;
        int prev=l;
        for(int m=i+1;m<n;m++){
            int tem=a[m];
            a[m]=prev;
            prev=tem;
        }
        n++;
        break;
         }

}
    if(!check){cout<<"YES"<<endl;break;}
}
}
}