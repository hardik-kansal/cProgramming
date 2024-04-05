#include<iostream>
#define LL long long
#include<algorithm>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	if(a[0]!=a[1])
	{
		cout<<"yes\n";
		return ;
	}
	else
	{
		for(int i=1;i<n;i++)
		if(a[i]%a[0]!=0)
		{
			cout<<"yes\n";
			return; 
		}
	}
	cout<<"no\n";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	solve();
}