// Solved by: Shoumya

#include<bits/stdc++.h>
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
	int n, x, c, cost = 0, sum = 0; cin >> n >> x >> c;
	int coins[n + 1];

	for (int i = 1; i <= n; i++) {
		cin >> coins[i];
		sum += coins[i];

		if (x - coins[i] > c) {
			cost += c;
			sum -= coins[i];
			sum += x;
		}
	}

	cout << sum - cost << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}