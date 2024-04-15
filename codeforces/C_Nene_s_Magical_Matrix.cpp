#include <iostream>
using namespace std;
using ll = long long;

void print1(int n) {
    for(int i = 0; i < n; i++) {
        cout << i + 1 << ' ';
    }
}

signed main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        ll sum = 0;
        ll target = n * (n + 1) / 2;
        ll count = 0;
        for(int i = 1; i <= n; i++) {
            if(n * i <= target) {
                count = i;
            }
        } 
        ll target2 = count * (count + 1) / 2;
        for(int i = 1; i <= n; i++) {
            if(count * i < target2) {
                sum += target;
            } else {
                sum += count * i + (target - target2);
            }
        }
        cout << sum << endl;
    }
    return 0;
}
