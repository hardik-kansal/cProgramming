#include <bits/stdc++.h>
using namespace std;
int const M=1e9+7;
int const N=1e3+10;
// long long int fact[N];

// long long int ps[N];

// long long int fact1[N][N];
// long long int ps2d[N][N];

// long long int gcdarray[N];
// long long int fwd[N];
// long long int bwd[N];

// long long int a[N];
// long long int ps[N];


int main(){
//     int t=0;
//     int n=0;
//     cin>>t;
//     cin>>n;
//     fact[0]=fact[1]=1;

//     for(int x=2;x<=n;x++){
//         fact[x]=(fact[x-1]*x)%M;
//     }
//     while(t--){
//         int a=0;
//         cin>>a;
//         cout<<fact[a]<<endl;
// }

// int t=0,n=0;
// cin>>t;
// cin>>n;
// for(int i=1;i<=n;i++){
//     cin>>fact[i];
//     ps[i]=ps[i-1]+fact[i];
// }
// while(t--){
// int l=0,r=0;
// cin>>l>>r;
// // l& r are  1 based indexed.
// cout<<ps[r]-ps[l-1];
// }

// int t=0,n=0;
// cin>>t;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         cin>>fact1[i][j];
//         ps2d[i][j]=ps2d[i-1][j]+ps2d[i][j-1]+fact1[i][j]-ps2d[i-1][j-1];
//     }
// }
// while(t--){
// int a,b,c,d;
// cin>>a>>b>>c>>d;
// cout<<ps2d[c][d]-ps2d[a-1][d]-ps2d[c][b-1]+ps2d[a-1][b-1];
// }


//   ### BCD of array from 0 to l and r to end; ####

// int t=0,n=0;
// cin>>t;
// cin>>n;
// for(int i=1;i<=n;i++){
//     cin>>gcdarray[i];
// }
// for(int i=1;i<=n;i++){
//   fwd[i]=__gcd(fwd[i-1],gcdarray[i]);
// }
// for(int j=n;j>0;j--){
//     bwd[j]=__gcd(bwd[j+1],gcdarray[j]);
// }
// while(t--){
//     // l& r are index based.
//     int l,r;
//     cin>>l>>r;
//     cout<<__gcd(fwd[l],bwd[r+1]);
// }



// int m=0;
// cin>>m;
// int n;
// cin>>n;
// while(m--){
//     int x=0;cin>>x;
//     int l,r;
//     cin>>l>>r;
//     a[l]+=x;
//     a[r+1]-=x;
// }
// for(int i=1;i<=n;i++){
//     ps[i]=ps[i-1]+a[i];
// }
// for(int j=0;j<=n;j++){
//     cout<<ps[j]<<" ";
// }






}