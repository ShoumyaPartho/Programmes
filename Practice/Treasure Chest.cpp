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
	int x, y, k; cin >> x >> y >> k;

	if (y <= x)
		cout << x << endl;

	else if ((x + k) >= y)
		cout << y << endl;

	else {
		int ans = x + k;
		int rem = y - ans;
		ans += (rem * 2);

		cout << ans << endl;
	}
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