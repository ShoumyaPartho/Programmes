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
	int tc, right, n, j; ll ans; cin >> tc;

	while (tc--) {
		cin >> n; ans = 0;

		vector<int> k(n + 1, 0), h(n + 1, 0);
		vector<pair<int, int> > range(n + 1, {0, 0}); // {Start, End} format data storage.

		for (int i = 1; i <= n; i++)
			cin >> k[i];

		for (int i = 1; i <= n; i++)
			cin >> h[i];

		for (int i = 1; i <= n; i++)
			range[i] = {k[i] - h[i] + 1, k[i]};

		sort(range.begin() + 1, range.end());

		for (int i = 1; i <= n;) {
			j = i + 1; right = range[i].second;

			for (; j <= n; j++) {
				if (range[j].first > right)
					break;

				right = max(right, range[j].second);
			}

			ans += (right - range[i].first + 1) * 1ll * (right - range[i].first + 2);
			i = j;
		}

		ans >>= 1;

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