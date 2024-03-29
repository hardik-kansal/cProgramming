#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;cin>>n;
vector<long long int> a[n];
for(int i=0;i<n;i++){
    int m;cin>>m;
    vector<long long int> v1(m);
    for(int i=0;i<m;i++){cin>>v1[i];}
    a[i]=v1;
    }
vector<long long int> v1(n);
vector<long long int> v2(n);    

for(int i=0;i<n;i++){
    sort(a[i].begin(),a[i].end());
    v1[i]=(a[i][0]);
    v2[i]=(a[i][1]);
} 
long long int sum=0;
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end());
for(int i=1;i<n;i++){sum+=v2[i];}
sum+=v1[0];
cout<<sum<<endl;






    }}