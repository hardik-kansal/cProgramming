// ############################ IMPORTANT   ###############################

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
     ll t;cin>>t;
     while(t--){
        ll n,p,l,t;cin>>n>>p>>l>>t;
        ll task=(n-1)/7+1;//[n/7]
        ll ln=0;ll rn=n;
        ll mid=0;
        while(rn-ln>1){
            mid=(ln+rn)/2;
            if(l*mid+min(task,2*mid)*t>=p){
                rn=mid;
            }
            else{
                ln=mid;
            }
        }
        cout<<n-rn<<endl;
     }
}

// ############################################################################