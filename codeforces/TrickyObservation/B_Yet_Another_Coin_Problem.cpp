#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[16]={0,1,2,1,2,3,1,2,3,2,1,2,2,2,3};
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n>15) a[5]=1,a[8]=2;
		cout<<n/15+a[n%15]<<endl;
		a[5]=3,a[8]=3;
	} 
}