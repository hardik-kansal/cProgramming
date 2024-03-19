#include <bits/stdc++.h>
using namespace std;
// BY LONG DIVISION METHOD
int gcd(int a , int b){
    if(b==0){return a;}
    return gcd(b,a%b);
}

// LCM*GCD=a*b
// gcd(a,b)=gcd(b,a%b)

int main(){
    int a=12;
    int b=18;
cout<<gcd(a,b)<<endl;
cout<<gcd(b,a)<<endl;
cout<<gcd(a,a%b)<<endl; 
cout<<gcd(b,a%b)<<endl; //gcd
cout<<a*b/gcd(a,b)<<endl; //LCM
cout<<a/gcd(a,b)<<'/'<<b/gcd(a,b)<<endl;

}