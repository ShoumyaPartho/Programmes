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
	ll tc, n, l, r, k, cnt; cin >> tc;

	while (tc--) {
		cin >> n >> l >> r >> k; cnt = 0;
		vector<ll> ara(n + 1, 0);

		for (int i = 1; i <= n; i++)
			cin >> ara[i];

		sort(ara.begin() + 1, ara.end());

		for (int i = 1; i <= n; i++) {
			if (k <= 0)
				break;

			if (ara[i] >= l and ara[i] <= r and ara[i] <= k)
				cnt++, k -= ara[i];
		}

		cout << cnt << endl;
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