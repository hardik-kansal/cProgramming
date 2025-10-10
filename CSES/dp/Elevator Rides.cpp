#include <bits/stdc++.h>
using namespace std;
vector<int> wt(20,0);
cin>>n>>x;

int main(){
    for(int i=0;i<n;i++)cin>>wt[i];
    cout<<solve(0,x)<<endd;
}