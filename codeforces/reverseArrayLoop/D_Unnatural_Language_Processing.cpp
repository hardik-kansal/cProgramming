#include <bits/stdc++.h>
using namespace std;
void solve() {
	int n;cin >> n;	string s;cin >> s;string res = "";
	while (!s.empty()) {
		int x;
		if (s.back() == 'a' || s.back() == 'e') {x = 2;}
		else {x = 3;}
		
		while (x--) {
			res += s.back();
			s.pop_back();
		}
		res += '.';
	}
	res.pop_back();
	reverse(res.begin(), res.end());
	cout << res << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
}
// CVC CV -> if read backward -> V is differntiating factor.