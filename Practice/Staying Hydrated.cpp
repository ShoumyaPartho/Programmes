// It's a greedy problem.

// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
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
	int t, tc, k, x1, y1, x2, y2; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cin >> k; cout << "Case #" << tc << ": ";
		vector<int> x, y;

		for (int i = 1; i <= k; i++) {
			cin >> x1 >> y1 >> x2 >> y2;
			x.push_back(x1); x.push_back(x2);
			y.push_back(y1); y.push_back(y2);
		}

		sort(x.begin(), x.end());
		sort(y.begin(), y.end());

		cout << x[(x.size() >> 1) - 1] << " " << y[(y.size() >> 1) - 1] << endl;
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