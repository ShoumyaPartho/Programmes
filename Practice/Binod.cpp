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
	ll n, q, l1, r1, l2, r2, hasSet, hasNotSet , x, y, ans, k;
	cin >> n >> q;
	ll nums[n + 1] = {0};
	vector<vector<ll> > isSet(n + 1, vector<ll> (61, 0));

	for (int i = 1; i <= n; i++)
		cin >> nums[i];

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= 60; j++)
			isSet[i][j] = isSet[i - 1][j] + (nums[i] & (1ll << j) ? 1 : 0);
	}

	for (int i = 1; i <= q; i++) {
		cin >> k >> l1 >> r1 >> l2 >> r2;

		hasSet = isSet[r1][k] - isSet[l1 - 1][k];
		hasNotSet = (r1 - l1 + 1) - hasSet;

		x = isSet[r2][k] - isSet[l2 - 1][k];
		y = (r2 - l2 + 1) - x;

		ans = (hasSet * y) + (hasNotSet * x);

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