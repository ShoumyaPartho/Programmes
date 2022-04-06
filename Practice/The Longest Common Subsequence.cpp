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

	int n, m, dir, val, i, j; cin >> n >> m;

	vector<int> A(n + 1, 0), B(m + 1, 0), res;
	vector<vector<pair<int, int> > > dp(n + 1, vector<pair<int, int>> (m + 1, {0, 0}));

	for (i = 1; i <= n; i++)
		cin >> A[i];

	for (i = 1; i <= m; i++)
		cin >> B[i];

	for (i = 1; i <= n; i++) {

		for (j = 1; j <= m; j++) {

			if (A[i] == B[j]) {
				dir = 2;
				val = 1 + dp[i - 1][j - 1].first;
				dp[i][j] = {val, dir};
			}

			else if (dp[i - 1][j].first > dp[i][j - 1].first) {
				dir = 1;
				val = dp[i - 1][j].first;
				dp[i][j] = {val, dir};
			}

			else {
				dir = 3;
				val = dp[i][j - 1].first;
				dp[i][j] = {val, dir};
			}
		}
	}

	// cout << dp[n][m].first << endl;
	i = n; j = m;

	while (i and j) {

		if (dp[i][j].second == 1)
			i--;

		else if (dp[i][j].second == 3)
			j--;

		else {
			val = A[i];
			res.push_back(val);
			i--;
			j--;
		}
	}

	for (auto it = res.end() - 1; it >= res.begin(); it--) {
		cout << *it;
		if (it != res.begin())
			cout << " ";
	}
}

int main() {
	// fastIO();
	// clock_t start = clock();
	// Write code here...

	solve();

// #ifndef ONLINE_JUDGE
// 	clock_t stop = clock(); cout.precision(10);
// 	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
// #endif

	return 0;
}