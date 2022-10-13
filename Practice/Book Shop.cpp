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
	int n, x; cin >> n >> x;
	int page[n + 1] = {0}, price[n + 1] = {0};
	vector<vector<int> > dp(n + 1, vector<int> (x + 1, 0));

	for (int i = 1; i <= n; i++)
		cin >> price[i];

	for (int i = 1; i <= n; i++)
		cin >> page[i];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= x; j++) {
			if (j < price[i])
				dp[i][j] = dp[i - 1][j];

			else
				dp[i][j] = max(dp[i - 1][j], page[i] + dp[i - 1][j - price[i]]);
		}
	}

	cout << dp[n][x] << endl;
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