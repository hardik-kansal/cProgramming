#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int cur = 0;

        // UNderstabd pattern of printing.. for n=8=>  1 2 4 8 3 6 5 7
        for (int i = 1; i <= n; i += 2) {
            for (int j = i; j <= n; j *= 2) {
                a[cur++] = j;
            }
        }
        for (int i = 0; i<n; ++i) {
            cout << a[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}
