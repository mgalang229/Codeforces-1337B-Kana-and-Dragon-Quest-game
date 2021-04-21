#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, n, m;
		cin >> x >> n >> m;
		// do the Void Absorption with the conditions:
		// 'x' and 'n' are still greater than 0
		// 'x' / 2 + 10 is STRICTLY smaller than 'x' itself
		while (x > 0 && n > 0 && x / 2 + 10 < x) {
			// do the following operation according to the Void Absorption spell
			x = x / 2 + 10;
			// decrement 'n'
			n--;
		}
		// check if 'x' is less than or equal to 'm' multiplied to 10
		cout << (x <= m * 10 ? "YES" : "NO") << '\n';
	}
	return 0;
}
