#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    vector<ll> a(int(2e5) + 1, 0);
    
    for (ll i = 1; i < int(2e5) + 1; i++) {
        a[i] = (i % 10) + a[(i / 10)];
    }

    for (ll i = 1; i < 2e5 + 1; i++) {
        a[i] += a[i - 1];
    }

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << a[n] << endl;
    }

    return 0;
}
