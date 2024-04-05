#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 int main() {
    int t;cin>>t;
    while(t--){
int n; cin >> n; vector<int> a(n);for(int i = 0; i < n; ++i){cin >> a[i];}
    ll ans = a[0];
    ll mn = min(0, a[0]);
    ll sum = a[0];
    for (int i = 1; i < n; ++i) {
        if (abs(a[i]-a[i-1])%2==0) {
            mn = 0;
            sum = 0;
        }
        sum += a[i];
        ans = max(ans, sum - mn);
        mn = min(mn, sum);
    }
    cout << ans << endl;
    }
}