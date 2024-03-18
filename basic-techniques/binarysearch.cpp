#include <bits/stdc++.h>
using namespace std;
bool predicatef(int x,int * p,int n){
    for(int i=1;i<n;i++){
        if(p[i]-p[i-1]<x){return false;}
    }
    return true;
}
int main(){
    // int n;
    // cin>>n;
    // vector<int > v(n,0);

    // for(int i=0;i<v.size();i++){
    //     cin>>v[i];
    // }
    // cout<<"number to be searched: "<<endl;
    // int x;cin>>x;
    // int hi=n-1;
    // int low=0;
    // int mid=0;
    // while(hi-low>1){
    //     mid =(hi+low)/2;
    //     if(v[mid]<x){
    //         low=mid+1;
    //     }
    //     else{
    //         hi=mid;
    //     }
    // }
    // if(v[hi]==x){
    //     cout<<hi<<endl;
    // }
    // else if(v[low]==x){
    //     cout<<low<<endl;}
    // else{
    //     cout<<"Not found"<<endl;
    // }

// int x;
// cin>>x;
// int n;
// cin>>n;
// double low=1;
// double hi=x;
// double eps=1e-6;
// double mid=0;
// while(hi-low>eps){
//     mid=(hi+low)/2;
//     if(pow(mid,n)<x){
//         low=mid;
//     }
//     else{
//         hi=mid;
//     }
// }
// cout<<setprecision(10)<<low<<endl;
// cout<<setprecision(10)<<hi<<endl;
// cout<<pow(x,1.0/n)<<endl;


// Binary search valid for monotonic predicate functions.=> TTTTTFFFFF   , FFFFTTTTT
// example- trees cut que ..gathered wood >=M => true else false which occus after a min height. 
// example- cows stall que .. min distance bw adjacent cows>=min => true else false as there are fixed no of stalls.


int n;cin>>n; //no of cows
int s;cin>>s; // no of stalls
int p[n];
for(int i=0;i<n;i++){
    cin>>p[i];
}// positions of cows in sorted order.=> here min distance bw two cows must be the highest one.
int low=0;
int hi=s;
int mid=0;
while(hi-low>1){
    mid=(hi+low)/2;
    if(predicatef(mid,p,n)){
        low=mid;
    }
    else{
        hi=mid-1;
    }
}
if(predicatef(hi,p,n)){
cout<<hi<<endl;
}
else{
    cout<<low<<endl;
    // Mentioned- there is a max distance exist , after that cows inbw distance exceed stalls=> TTTFFF
}

}