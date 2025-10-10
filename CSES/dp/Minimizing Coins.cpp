#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];
    const int INF = 1e9;
    vector<int> dp(x + 1, INF);
    dp[0] = 0;
    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < n; j++) {
            if (i - c[j] >= 0) dp[i] = min(dp[i], dp[i - c[j]] + 1);
        }
    }
    cout << (dp[x] == INF ? -1 : dp[x]) << endl;
}
