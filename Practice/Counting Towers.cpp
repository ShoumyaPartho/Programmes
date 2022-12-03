// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
const ll MOD = 1e9 + 7, N = 1e6 + 5;
vector<vector<ll> > dp(N + 1, vector<ll> (3, 0));

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void calc() {
	dp[1][1] = dp[1][2] = 1;

	for (int i = 2; i < N; i++) {
		dp[i][1] = (2 * dp[i - 1][1] + dp[i - 1][2]) % MOD;
		dp[i][2] = (4 * dp[i - 1][2] + dp[i - 1][1]) % MOD;
	}
}

void solve() {
	ll n; cin >> n;

	cout << (dp[n][1] + dp[n][2]) % MOD << endl;
}

int main() {
	fastIO();
	calc();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}