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
	ll n, target; cin >> n;
	target = n * (n + 1) / 2ll;

	if (target & 1ll) {
		cout << 0 << endl;
		return;
	}

	target /= 2ll;
	vector<vector<ll> > dp(n + 1, vector<ll> (target + 1, 0ll));
	dp[0][0] = 1;

	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= target; j++) {
			dp[i][j] = dp[i - 1][j];

			if (j - i >= 0)
				dp[i][j] = (dp[i][j] + dp[i - 1][j - i]) % MOD;
		}
	}

	cout << dp[n - 1][target] << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}