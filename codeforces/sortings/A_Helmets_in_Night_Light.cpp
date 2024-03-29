#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int N = 1e5 + 10;
 
struct nod
{
	int a, b;
}node[N];
 
bool cmp(nod x1, nod x2)
{
	if(x1.b != x2.b)
		return x1.b < x2.b;
	return x1.a > x2.a;
}
 
int main()
{	int t;
	cin >> t;
	while(t --)
	{
		int n, p;
		cin >> n >> p;
		for (int i = 0; i < n; ++ i)
			cin >> node[i].a;
		for (int i = 0; i < n; ++ i)
			cin >> node[i].b;	
			
		sort(node, node + n, cmp);
		LL k = n, sum = 0;	
		sum += p;
		k --;
		for (int i = 0; i < n; ++ i)
		{
			if(node[i].b >= p)  break;
			while(k > 0 && node[i].a > 0)
			{
				sum += node[i].b;
				node[i].a --;
				k --;
			}
			if(k == 0)  break;
		}
		cout << sum + k * p;
		cout << '\n';
	}
	return 0;
}