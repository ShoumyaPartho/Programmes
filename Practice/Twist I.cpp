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
	int n, x, ans = 0; cin >> n;
	int ara[110] = {0}, dp[110] = {0};

	for (int i = 1; i <= n; i++) {
		cin >> x;
		dp[x + 1] = max(dp[x + 1], dp[x] + 1);
		dp[x]   = max(dp[x - 1] + 1, dp[x]);

		ans = max({ans, dp[x], dp[x + 1]});
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