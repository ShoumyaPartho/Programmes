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
	ll n, MOD = 998244353; cin >> n;
	ll data[n + 1][3], dp[n + 1][3];
	memset(dp, 0, sizeof(dp)); dp[1][1] = dp[1][2] = 1;

	for (int i = 1; i <= n; i++)
		cin >> data[i][1] >> data[i][2];

	for (int i = 2; i <= n; i++) {
		for (int p = 1; p <= 2; p++) {
			for (int q = 1; q <= 2; q++) {
				if (data[i - 1][p] != data[i][q])
					dp[i][q] = ((dp[i][q] % MOD) + (dp[i - 1][p] % MOD)) % MOD;
			}
		}
	}

	cout << ((dp[n][1] % MOD) + (dp[n][2] % MOD)) % MOD << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t = 1; // cin>>t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}