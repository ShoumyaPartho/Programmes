// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
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
	int tc, n, k, flag; cin >> tc;
	while (tc--) {

		cin >> n >> k; flag = 0;

		vector<int> ara(n + 1, 0);
		vector<vector<int> > dp(n + 1, vector<int> (k + 1, 0));

		for (int i = 1; i <= n; i++)
			cin >> ara[i];

		for (int i = 1; i <= n; i++)
			dp[i][0] = 1;

		for (int i = 1; i <= n; i++) {

			for (int j = 1; j <= k; j++) {

				if (j < ara[i]) {
					dp[i][j] = dp[i - 1][j];
					continue;
				}

				if (dp[i - 1][j] == 1)
					dp[i][j] = 1;

				else if (dp[i][j - ara[i]] == 1)
					dp[i][j] = 1;

				else
					dp[i][j] = 0;
			}
		}

		for (int i = k; i >= 1; i--) {

			if (dp[n][i] == 1) {
				cout << i << endl;
				flag = 1;
				break;
			}
		}

		if (not flag)
			cout << 0 << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}