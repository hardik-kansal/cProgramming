// Two arrays of n and m size with m>=n; Get n elements from m array such that Sum|a-b| is maximium.

# include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
	int t;cin>>t;
	while (t--)
	{
		int n,m;cin>>n>>m;
		int a[n], b[m];
		for (int i = 0; i<n;i++) cin>>a[i];
		for (int i = 0; i<m;i++) cin>>b[i];
		sort(a,a+n); sort(b,b+m);
		ll ans = 0;
		for (int i = 0; i<n;i++) ans+=max(abs(a[i]-b[m-i-1]), abs(a[i]-b[n-i-1]));
		cout<<ans<<endl;
	}
}

// THere should be a tradeoff 
// min of one must be compared with max of another..Making loop keeping this in mind..
// loop-> First n min & first n max