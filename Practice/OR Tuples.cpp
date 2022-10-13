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
	ll p, q, r, cnt = 0, ans = 1, num;
	cin >> p >> q >> r;

	for (int i = 0; i <= 25; i++) {
		num = 0;

		if (p & (1ll << i))
			num++;

		if (q & (1ll << i))
			num++;

		if (r & (1ll << i))
			num++;

		if (num == 3)
			ans *= 4;

		if (num == 1) {
			cout << "0" << endl;
			return;
		}
	}

	cout << ans << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}