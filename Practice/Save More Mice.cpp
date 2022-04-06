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
	ll tc, n, k, sum, ans; cin >> tc;

	while (tc--) {
		cin >> n >> k; sum = ans = 0;
		vector<ll> ara(k + 1, 0);

		for (int i = 1; i <= k; i++) {
			cin >> ara[i];
			ara[i] = n - ara[i];
		}

		sort(ara.begin() + 1, ara.end());

		for (int i = 1; i <= k; i++) {
			sum += ara[i];

			if (sum < n)
				ans = i;
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