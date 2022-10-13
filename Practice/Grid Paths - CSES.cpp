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

ll calc(int i, int j, int n, vector<vector<char> > &grid, vector<vector<ll> > &dp, ll MOD) {
	if (i == n and j == n)
		return dp[i][j] = 1ll;

	if (grid[i][j] == '*')
		return dp[i][j] = 0;

	if (dp[i][j] != -1)
		return dp[i][j];

	dp[i][j] = 0;

	if (j + 1 <= n)
		dp[i][j] = ((dp[i][j] % MOD) + (calc(i, j + 1, n, grid, dp, MOD)) % MOD) % MOD;

	if (i + 1 <= n)
		dp[i][j] = ((dp[i][j] % MOD) + (calc(i + 1, j, n, grid, dp, MOD)) % MOD) % MOD;

	return dp[i][j] % MOD;
}

void solve() {
	string s;
	ll n, MOD = 1e9 + 7; cin >> n;
	vector<vector<char> > grid(n + 1, vector<char> (n + 1, '.'));
	vector<vector<ll> > dp(n + 1, vector<ll> (n + 1, -1));

	for (int i = 1; i <= n; i++) {
		cin >> s;

		for (int j = 1; j <= n; j++)
			grid[i][j] = s[j - 1];
	}

	calc(1, 1, n, grid, dp, MOD);

	cout << (grid[n][n] == '*' ? 0 : dp[1][1] % MOD ) << endl;
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