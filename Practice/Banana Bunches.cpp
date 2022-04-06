// Learnt from analysis + AlphaQ's implementation.
// Very good implementation technique used here.

// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
#define MAX 1e9+69
#define LIM 1e6+69

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int tc, t, k, n, curSum, ans, equalK; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cin >> n >> k; ans = MAX; equalK = 0;
		vector<int> ara(n + 1, 0), best(LIM, MAX);

		for (int i = 1; i <= n; i++) {
			cin >> ara[i];

			if (ara[i] == k)
				equalK = 1;
		}

		cout << "Case #" << tc << ": ";

		if (equalK) {
			cout << 1 << endl;
			continue;
		}

		for (int i = 2; i <= n; i++) {
			curSum = 0;

			for (int j = i - 1; j >= 1; j--) {
				curSum += ara[j];

				if (curSum > k)
					break;

				best[curSum] = min(best[curSum], i - j);
			}

			curSum = 0;

			for (int j = i; j <= n; j++) {
				curSum += ara[j];

				if (curSum > k)
					break;

				ans = min(ans, j - i + 1 + best[k - curSum]);
			}
		}

		if (ans > LIM)
			cout << -1 << endl;

		else
			cout << ans << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(3);
	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}