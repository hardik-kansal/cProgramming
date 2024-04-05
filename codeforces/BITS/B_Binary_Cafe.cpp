#include <bits/stdc++.h>
 
using namespace std;
 
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        k = min(k, 31);
        cout << min(n, (1 << k) - 1) + 1 << "\n";
    }
    return 0;
}

// Given a number k-> k+1 ways of arranging binary to get sum less than k.
// but if only fixed no x of binaries allowed -> min(n+1,2^x) 
// if 2^k needs to be calculated but k range is higher try k=min(k,31);