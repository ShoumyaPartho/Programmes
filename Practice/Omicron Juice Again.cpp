// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

}

void solve() {
	int a, b, c, k, temp; cin >> a >> b >> c >> k;

	if ((a + b + c) % 3) {
		cout << "Fight" << endl;
		return;
	}

	if (k == 0) {
		cout << (a == b and a == c ? "Peaceful" : "Fight") << endl;
		return;
	}

	else {
		temp = (a + b + c) / 3;

		if (abs(a - temp) % k) {
			cout << "Fight" << endl;
			return;
		}

		if (abs(b - temp) % k) {
			cout << "Fight" << endl;
			return;
		}

		if (abs(c - temp) % k) {
			cout << "Fight" << endl;
			return;
		}

		cout << "Peaceful" << endl;
	}
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cout << "Case " << tc << ": ";
		solve();
	}

	return 0;
}