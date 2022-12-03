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
	int n, sum = 0; cin >> n;
	int coins[n + 1];

	for (int i = 1; i <= n; i++) {
		cin >> coins[i];
		sum += coins[i];
	}

	vector<vector<bool> > dp(n + 1, vector<bool> (sum + 1, false));
	dp[0][0] = true;
	// sort(coins + 1, coins + 1 + n);

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= sum; j++) {
			if (j < coins[i])
				dp[i][j] = dp[i - 1][j];

			else
				dp[i][j] = ((dp[i - 1][j] or dp[i - 1][j - coins[i]]) ? true : false);
		}
	}

	cout << count(dp[n].begin() + 1, dp[n].end(), true) << endl;

	for (int i = 1; i <= sum; i++) {
		if (dp[n][i])
			cout << i << " \n"[i == sum];
	}
}

int main() {
	fastIO();

	solve();

	return 0;
}