// 0-1 Knapsack Reference, Jenny's lecture

// Observation is:
// 	1. Greedy (Highest box at present is best choice)
//	2. Suffix Array (We need to build to 2*k)

// Simple Variant, Just Reverse Logic

// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
using namespace std;

#define endl "\n"
#define ll long long int

const int MAX = 1e9 + 7;

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

		vector<int> heights(n + 1, 0), suffSum(n + 1, 0);
		vector<vector<int> > dp(n + 2, vector<int> (k + 1, MAX));

		for (int i = 1; i <= n; i++)
			cin >> heights[i];

		sort(heights.begin() + 1, heights.end()); suffSum[n] = heights[n];

		for (int i = n - 1; i >= 1; i--)
			suffSum[i] = suffSum[i + 1] + heights[i];

		for (int i = 0; i <= k; i++) {

			if (i <= heights[n])
				dp[n][i] = heights[n];
		}

		for (int i = n; i >= 1; i--) {

			for (int j = k; j >= 0; j--) {

				if (j <= heights[i])
					dp[i][j] = heights[i];

				else if (dp[i + 1][j - heights[i]] == MAX)
					dp[i][j] = MAX;

				else
					dp[i][j] = min(dp[i + 1][j], heights[i] + dp[i + 1][j - heights[i]]);
			}
		}

		for (int i = n; i >= 1; i--) {
			if (suffSum[i] - dp[i][k] >= k) {
				flag = 1;
				cout << n - i + 1 << endl;
				break;
			}
		}

		if (not flag)
			cout << -1 << endl;
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