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
	int n, l = 2; cin >> n;
	vector<vector<int> > grid(n + n, vector<int>(n + 1, 0)), dp(n + n, vector<int>(n + 1, 0));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			cin >> grid[i][j];
	}

	for (int i = 1; i < n; i++, l++) {
		for (int j = l; j <= n; j++)
			cin >> grid[n + i][j];
	}

	dp[1][1] = grid[1][1];

	if (n == 1) {
		cout << dp[1][1] << endl;
		return;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			int temp = grid[i][j] +  max(dp[i - 1][j - 1] , dp[i - 1][j]);
			dp[i][j] = max(temp, dp[i][j]);
		}
	}

	for (int i = 1; i < n; i++) {
		for (int j = i + 1; j <= n; j++) {
			int temp = grid[n + i][j] + max(dp[n + i - 1][j - 1] , dp[n + i - 1][j]);
			dp[n + i][j] = max(temp, dp[n + i][j]);
		}
	}

	cout << dp[n + n - 1 ][n] << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cout << "Case " << tc << ": ";
		solve();
	}

	return 0;
}