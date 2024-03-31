#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;cin>>n;
priority_queue<int> pq;
ll sum=0;
for(int i=0;i<n;i++){
    int x;cin>>x;
    if(x==0){
        if(!pq.empty()){
            sum+=pq.top();pq.pop();
        }
    }
    else{
        pq.push(x);
    }
}
cout<<sum<<endl;
        
    }}

