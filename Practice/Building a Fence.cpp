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
	ll tc, n, k, maxi, mini, flag; cin >> tc;

	while (tc--) {
		cin >> n >> k;
		vector<ll> h(n + 1, 0);

		for (int i = 1; i <= n; i++)
			cin >> h[i];

		maxi = mini = h[1], flag = 1;

		for (int i = 2; i <= n; i++) {
			mini = max(mini - k + 1, h[i]);
			maxi = min(maxi + k - 1, h[i] + k - 1);

			if (maxi < mini) {
				flag = 0;
				break;
			}
		}

		if (not (h[n] >= mini and h[n] <= maxi))
			flag = 0;

		cout << (flag == 1 ? "YES\n" : "NO\n");
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