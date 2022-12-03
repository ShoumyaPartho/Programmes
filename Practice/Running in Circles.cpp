// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	ll l, n, ans = 0, d, temp = 0;
	char c, dir;

	cin >> l >> n >> d >> dir;

	c = dir, temp += d; ans += (temp / l); temp %= l, n--;

	while (n--) {
		cin >> d >> dir;
		// cout << "ans = " << ans << " TEMP = " << temp << " dir = " << dir << endl;

		if (dir == c) {
			temp += d;
			ans += (temp / l);
			temp %= l;
		}

		else {
			if (temp - d <= 0)
				c = dir;

			temp -= d;

			if (temp < 0)
				temp *= -1;

			ans += (temp / l);
			temp %= l;
		}
	}

	cout << ans << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cout << "Case #" << tc << ": ";
		solve();
	}

	return 0;
}