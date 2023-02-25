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
	ll a, b, c, d, ans = 0, t; cin >> a >> b >> c >> d;

	ans = t = a;

	if (not a) {
		cout << (b or c or d ? 1 : 0) << endl;

		return;
	}
	if (b > c)
		swap(b, c);

	ans += b + b;
	c -= b;

	ans += min(a, c);
	if (a < c) {
		cout << ans + 1 << endl;
		return;
	}

	t -= min(a, c);

	ans += min(t, d);

	if (d and d > t)
		ans++;

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