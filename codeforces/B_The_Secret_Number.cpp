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
#define pob pop_back
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
#define in(arr, n) forw(i, 0, n) cin >> arr[i];
#define out(arr, n)                      \
    forw(i, 0, n) cout << arr[i] << " "; \
    cout << endl;


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


/*
void printBinary(int num){
    for(int i=31;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return abs(a);
}
ll lcm(ll a,ll b){
    if(a==0 || b==0)return 0;
    return abs(a/gcd(a,b)*b);
}



ll binExpo(ll a,ll b,ll M=LLONG_MAX){
    ll ans=1;
    a=a%M;
    while(b){
        if(b&1)ans=binMultiply(ans,a,M);
        a=binMultiply(a,a,M);
        b>>=1;
    }
    return ans;
}
ll binMultiply(ll a ,ll b,ll M){
    if(a==0 || b==0)return 0;
    ll ans=0;
    while(b){
        if(b&1)ans=(ans+a)%M;
        a=(a+a)%M;
        b>>=1;
    }
    return ans;
}

// if M is prime
ll binExpoLarge(ll a,ll b,ll c,ll M){
    return binExpo(a,binExpo(b,c,M-1),M);
}

*/

/* 

vll get_h_prime(){
vb a(N+1,false);
vll l(N,0),h(N,0);
a[0]=a[1]=true;
for(ll i=2;i*i<=N;i++){
    l[i]=h[i]=i;
    if(a[i]==false){
        for(ll j=2*i;j<=N;j+=i){
            a[j]=true;
            h[j]=i;
            if(l[j]==0){l[j]=i;}
        }
    }
}
return a;
}
auto h_prime=get_h_prime(); 


vll prime_factors(ll num){
ll count=0;
vll factors;
while(num>1){
    int f=h_prime[num];
    while(num%f==0){
        factors.pb(f);
        num/=f;
    }
}
return factors;
} 

*/


/*

vll get_divisors(ll n){
    vll v;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            v.pb(i);
            if(i*i!=n)v.pb(n/i);
        }
    }
    return v;
}

*/










int main(){
    fastio();
    ll T;cin>>T;
    while (T--){

long long n;cin>>n;
long long p=1e18;
vll ans;
for(int i=18;i>0;i--){
    if(n%(1+p)==0)ans.push_back(n/(1+p));
    p/=10;
}
cout<<ans.size()<<endl;
if(ans.size()!=0)
{
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<' ';
    }
    cout<<endl;
    
}





        
    }}

