#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        // Initial cost
        int base = 0;
        for (int i = 0; i < n; ++i)
            base += abs(a[i] - b[i]);

        vector<tuple<int, int, int>> deltas; // (gain, i, j)

        // Only adjacent pairs to keep O(n)
        for (int i = 0; i + 1 < n; ++i) {
            vector<int> vals = {a[i], b[i], a[i + 1], b[i + 1]};
            sort(vals.begin(), vals.end());
            int new_cost = (vals[3] - vals[0]) + (vals[2] - vals[1]);
            int old_cost = abs(a[i] - b[i]) + abs(a[i + 1] - b[i + 1]);
            int gain = new_cost - old_cost;
            deltas.emplace_back(gain, i, i + 1);
        }

        // Sort by gain ascending (Ali chooses k with least gain)
        sort(deltas.begin(), deltas.end());

        vector<bool> used(n, false);
        int count = 0;
        for (auto &[gain, i, j] : deltas) {
            if (count == k) break;
            if (!used[i] && !used[j]) {
                base += gain; // may be negative
                used[i] = used[j] = true;
                count++;
            }
        }

        cout << base << '\n';
    }

    return 0;
}
