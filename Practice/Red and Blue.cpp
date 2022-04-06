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

int preSum(const vector<int> &red, const vector<int> &blue, int n, int m) {
	vector<int> r(red), b(blue);
	int maxR = 0, maxB = 0;

	for (int i = 1; i <= n; i++)
		r[i] += r[i - 1];

	for (int i = 1; i <= m; i++)
		b[i] += b[i - 1];

	for (int val : r)
		maxR = max(maxR, val);
	for (int val : b)
		maxB = max(maxB, val);

	return maxR + maxB;
}

int dpSol(const vector<int> &red, const vector<int> &blue, int n, int m) {

	vector<int> r(red), b(blue);

	for (int i = 1; i <= n; i++)
		r[i] += r[i - 1];

	for (int i = 1; i <= m; i++)
		b[i] += b[i - 1];

	vector<vector<int> > dp(n + 1, vector<int> (m + 1, 0));

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			int v1 = 0, v2 = 0, v3 = 0;

			if (i - 1 >= 0) v1 = dp[i - 1][j];
			if (j - 1 >= 0) v2 = dp[i][j - 1];
			v3 = r[i] + b[j];

			dp[i][j] = max(0, max(v1, max(v2, v3)));
		}
	}

	return dp[n][m];
}

int testingSol(const vector<int> &red, const vector<int> &blue, int n, int m) {

	vector<int> r(red), b(blue);
	int ans = 0;

	for (int i = 1; i <= n; i++)
		r[i] += r[i - 1];

	for (int i = 1; i <= m; i++)
		b[i] += b[i - 1];

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {

			ans = max(ans, r[i] + b[j]);
		}
	}

	return ans;
}

void solve() {
	int tc, n, m; cin >> tc;

	while (tc--) {
		cin >> n;
		vector<int> red(n + 1, 0);
		for (int i = 1; i <= n; i++)
			cin >> red[i];

		cin >> m;
		vector<int> blue(m + 1, 0);
		for (int i = 1; i <= m; i++)
			cin >> blue[i];

		// cout << preSum(red, blue, n, m) << endl;

		// cout << dpSol(red, blue, n, m) << endl;

		cout << testingSol(red, blue, n, m) << endl;
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