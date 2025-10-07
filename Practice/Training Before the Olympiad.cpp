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
	int n, cntOdd = 0, x; ll sum = 0, ans; cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x;

		if (x % 2)
			cntOdd++;
		sum += x;

		ans = sum - (cntOdd / 3);

		if (cntOdd % 3 == 1) {
			if (i > 1)
				ans--;
		}

		cout << ans << " \n"[i == n];
	}
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