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
	int w, h; cin >> w >> h;
	vector<vector<int> > dp(w + 1, vector<int> (h + 1, 1e9 + 7));

	for (int i = 0; i <= w; i++) {
		for (int j = 0; j <= h; j++) {
			if (i == j)
				dp[i][j] = 0;

			else {
				for (int k = 1; k < i; k++)
					dp[i][j] = min(dp[i][j], dp[k][j] + dp[i - k][j] + 1);

				for (int k = 1; k < j; k++)
					dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j - k] + 1);
			}
		}
	}

	cout << dp[w][h] << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}