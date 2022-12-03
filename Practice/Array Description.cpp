// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
const ll MOD = 1e9 + 7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int n, m, x, ans = 0; cin >> n >> m;
	vector<vector<ll> > dp(n + 1, vector<ll> (m + 1, 0));

	cin >> x;

	if (x == 0)
		fill(dp[1].begin() + 1, dp[1].end(), 1);
	else
		dp[1][x] = 1;

	for (int i = 2; i <= n; i++) {
		cin >> x;

		if (x == 0) {
			for (int v = 1; v <= m; v++) {
				if (v - 1 >= 0)
					dp[i][v] = ((dp[i][v] % MOD) + (dp[i - 1][v - 1] % MOD)) % MOD;

				dp[i][v] = ((dp[i][v] % MOD) + (dp[i - 1][v] % MOD)) % MOD;

				if (v + 1 <= m)
					dp[i][v] = ((dp[i][v] % MOD) + (dp[i - 1][v + 1] % MOD)) % MOD;
			}
		}

		else {
			if (x - 1 >= 0)
				dp[i][x] = ((dp[i][x] % MOD) + (dp[i - 1][x - 1] % MOD)) % MOD;

			dp[i][x] = ((dp[i][x] % MOD) + (dp[i - 1][x] % MOD)) % MOD;

			if (x + 1 <= m)
				dp[i][x] = ((dp[i][x] % MOD) + (dp[i - 1][x + 1] % MOD)) % MOD;
		}
	}

	for (int i = 1; i <= m; i++)
		ans = (ans + dp[n][i]) % MOD;

	cout << ans << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}