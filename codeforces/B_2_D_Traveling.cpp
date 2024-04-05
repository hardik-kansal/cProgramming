#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
ll n,k,a,b;cin>>n>>k>>a>>b;
class node{
    public:
    ll x;
    ll y;
};
vector<node> c(n);
for(int i=0;i<n;i++){
node q;
cin>>q.x;
cin>>q.y;
c[i]=q;
}
ll distance=abs(c[a-1].x-c[b-1].x)+abs(c[a-1].y-c[b-1].y);
if(k<2){cout<<distance<<endl;continue;}
ll min1=LLONG_MAX;
for(int j=0;j<k;j++){
    ll dis=abs(c[a-1].x-c[j].x)+abs(c[a-1].y-c[j].y);
    if(dis<=min1){
        min1=dis;
    }
}
ll min2=LLONG_MAX;
for(int j=0;j<k;j++){
    ll dis=abs(c[b-1].x-c[j].x)+abs(c[b-1].y-c[j].y);
    if(dis<=min2){
        min2=dis;
    }
}
cout<<min(distance,(min1+min2))<<endl;

 }}

