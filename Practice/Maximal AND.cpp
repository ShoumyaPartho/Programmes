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
	ll tc, n, k, x, ans; cin >> tc;

	while (tc--) {
		cin >> n >> k; ans = 0;
		vector<ll> setBit(50, 0);

		for (int i = 1; i <= n; i++) {
			cin >> x;

			for (int j = 0; j <= 30; j++) {
				if (x & (1ll << j))
					setBit[j]++;
			}
		}

		for (int i = 30; i >= 0; i--) {
			if ((n - setBit[i]) <= k) {
				ans |= (1ll << i);
				k -= (n - setBit[i]);
			}
		}

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