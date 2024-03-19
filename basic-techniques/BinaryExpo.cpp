#include <bits/stdc++.h>
using namespace std;
const int M=1e9+7;

// a,b,M<=10e9 
int binaryexpoRec(int a,int b){
    if(b==0)return 1;
    long long res=binaryexpoRec(a,b/2);
    if(b&1) return a*res*res;else return res*res;
}

int binaryexpoItr(int a,int b){
int ans=1;
// USE a=a%M if a is 1e18 (ll range)
while(b){
    if(b&1)ans=((ans*a)*1ll)%M;
    a=(a*a*1ll)%M;
    b>>=1;
}
return ans;
}


// Use binaryMul in case of large a,b or their product is large.
long long int binarymul(long long a , long long b){
    long long int ans=0;
    while(b){
        if(b&1)ans=(ans+a)%M;
        a=(a*2)%M;
        b>>=1;
    }
    return ans;
}


// IF B is large - greater than 10e18 itself or digits given in form of array
long long int binaryexpoItr(int a,int b,int m){
long long int ans=1;
// USE a=a%M if a is 1e18 (ll range)
while(b){
    if(b&1)ans=(ans*a)%m;
    a=(a*a)%m;
    b>>=1;
}
return ans;
}


int main(){
    int a=10;
    int b=7;
    int c=24;
    int M=7;
    cout<<binaryexpoRec(3,3)<<endl;
    cout<<binaryexpoItr(3,3)<<endl;
    cout<<binarymul(4,6)<<endl;

    // EULER THEOREM
    cout<<binaryexpoItr(a,binaryexpoItr(7,24,6),M); // TO find a^(b^c)  %M 
}
