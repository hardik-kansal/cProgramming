#include <bits/stdc++.h>
using namespace std;
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pneg cout << "-1" << endl
#define endL cout << endl
#define MOD 998244353 // >1e8
#define INF 1e18
#define prDouble(x, y) cout << fixed << setprecision(y) << x
#define bitcount(x) __builtin_popcount(x)
#define ll long long
#define ld long double
#define pb push_back
#define ppb pop_back
#define MPI 3.14159265358979323846
#define F first
#define S second
#define iterate(v2,it) for(it=v2.begin();it!=v2.end();++it)
#define forw(i, j, n) for (ll i = j; i < n; i++)
#define bac(i, j, n) for (ll i = j - 1; i >= n; i--)
#define all(x) x.begin(), x.end()
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
class node{
    public:
    ll value;int index;
};
#define in(arr, n) forw(i, 0, n) cin >> arr[i];
#define out(arr, n)                      \
    forw(i, 0, n) cout << arr[i] << " "; \
    cout << endl;

typedef vector<node> vnll;
typedef vector<ll> vll;
typedef vector<ld> vld;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef pair<ll, ll> pll;
typedef map<ll,string> mls;
typedef map<ll,ll> mll;
typedef map<string,ll> msl;
typedef priority_queue<ll> mxpq;
typedef priority_queue<ll, vll, greater<ll>> mnpq;
#define N 100005 //1e5+5
void inNode(vnll& arr, int n) {
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        node a;
        a.value = x;
        a.index = i;
        arr[i] = a;
    }
}
void printBinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
/* vll get_h_prime(){
vb a(N+1,false);
vector<ll> l(N,0),h(N,0);
a[0]=a[1]=true;
for(ll i=2;i*i<=N;i++){
    l[i]=h[i]=i;
    if(a[i]==false){
        for(ll j=i*i;j<=N;j+=i){
            a[j]=true;
            h[j]=i;
            if(l[j]==0){l[j]=i;}
        }
    }
}
return a;
}
auto h_prime=get_h_prime(); */



/* // sorted prime factors 
vll prime_factor(ll num){
ll count=0;
vll a;a.pb(1);
while(num){
    int f=h_prime[num];
    while(num%f){
        a.pb(f);
        count++;
        num/=f;
    }
}
sort(all(a));
return a;
} */
vector<ll> get_divisors(ll n){
    vll v;
    v.push_back(1);
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(i*i!=n)v.push_back(n/i);
        }
    }
    sort(all(v));
    return v;
}
// check_prime_____highest prime divisor____lowest prime divisor
vector<bool> check_prime(){
vb a(N+1,false);
vector<ll> l(N,0),h(N,0);
a[0]=a[1]=true;
for(ll i=2;i*i<=N;i++){
    l[i]=h[i]=i;
    if(a[i]==false){
        for(ll j=i*i;j<=N;j+=i){
            a[j]=true;
            h[j]=i;
            if(l[j]==0){l[j]=i;}
        }
    }
}
return a;
}






/* ##############################  IMPORTANT ##################### */
signed main(){
    fastio();
    ll T;cin>>T;
    while (T--){
ll n;cin >> n;
		ll o = 0, z = 0;
		for (ll i = 0, a; i < n; i++) {
			cin >> a;
			o |= a;
			z |= ~a;
		}
		cout << (1ll << (__builtin_ctzll(o & z) + 1)) << '\n';
 }}

/* 
Remainder when divide by 2 raise power is remaining bits left
__builtin_ctzll() --calculates no of trailing zeroes
			o |= a;
			z |= ~a;
            o & z
this expression shows no of common bits in all.
 */

