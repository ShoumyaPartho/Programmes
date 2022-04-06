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
	int tc, n, maxi, mini, ans, maIdx, miIdx; cin >> tc;

	while (tc--) {
		cin >> n; maxi = -1, mini = 10000, ans = 0, maIdx = miIdx = 0;

		vector<int> ara(n + 1, 0);

		for (int i = 1; i <= n; i++) {
			cin >> ara[i];

			if (ara[i] > maxi) {
				maxi = ara[i];
				maIdx = i;
			}

			if (ara[i] < mini) {
				mini = ara[i];
				miIdx = i;
			}
		}

		ans = min(miIdx, maIdx) + (n - max(maIdx, miIdx) + 1);
		ans = min(ans, max(maIdx, miIdx));
		ans = min(ans, n - min(maIdx, miIdx) + 1);

		cout << ans << endl;
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