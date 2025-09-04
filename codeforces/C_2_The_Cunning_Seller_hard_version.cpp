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



void printBinary(ll num){
    for(int i=31;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

/*
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
*/


/*
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

// n(log(log)) 

vll get_prime(){
const int N=1e6;
vb isPrime(N+1,true);
isPrime[0]=isPrime[1]=false;
vll l(N+1,0),h(N+1,0);
for(ll i=2;i<=N;i++){
    if(isPrime[i]==true){
        l[i]=h[i]=i;
        for(ll j=2*i;j<=N;j+=i){
            a[j]=false;
            h[j]=i;
            if(l[j]==0){l[j]=i;}
        }
    }
}
// lowest_prime, is_prime
return h;

}


auto h_prime =get_prime();


// log^2
// 3*3*3*2*2*2
// count = 6
// count_divisors = (3+1)*(4+1);
vll prime_factors(ll num){
ll count=0;
ll count_divisors=0;
vll factors;
while(num>1){
    int f=h_prime[num];
    ll c=0;
    while(num%f==0){
        factors.pb(f);
        num/=f;
        count++;
        c++;
    }
    count_divisors*=(c+1);
}
return factors;
} 



// root(n)
// 1, n and rest divisors

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








ll a[35];
ll pw3[35];
int main(){
    fastio();
    pw3[0]=1;
	for(int i=1; i<30; ++i){
		pw3[i]=pw3[i-1]*3;
	}
    ll T;cin>>T;

    while (T--){

        int n; ll k;
		cin >> n >> k;
		for(int i=0; i<30; ++i){
			a[i]=n%3;
			n/=3;
		}
		for(int i=0; i<30; ++i){
			k-=a[i];
		}
		if(k<0){
			cout << "-1\n";
			continue;
		}
		for(int i=29; i>0; --i){
			ll d=min((ll)a[i], k/2);
			a[i]-=d, a[i-1]+=3*d, k-=2*d;
		}
		ll ans=0;
		for(int i=0; i<30; ++i){
			ans+=a[i]*(pw3[i+1]+(i?i*pw3[i-1]:0ll));
		}
		cout << ans << endl;

        
    }}

