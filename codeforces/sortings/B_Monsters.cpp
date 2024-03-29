#include <bits/stdc++.h>
using namespace std;
struct node{
    int index;
    long long int value;
};
bool cmp(node a,node b){
if(a.value==b.value){
    return a.index<b.index;
}
else{
    return a.value>b.value;
}
}
int main(){
    int t;
    cin>>t;
    while(t--){
long long int n,k;
cin>>n>>k;

node a[n];
for(int i=0;i<n;i++){
    node b;
    cin>>b.value;
    b.index=i+1;
    if(b.value%k!=0){b.value=b.value%k;}
    else{b.value=k;}
    a[i]=b;
}
sort(a,a+n,cmp);
for(int i=0;i<n;i++){
    cout<<a[i].index<<" ";
}
cout<<endl;




    }}