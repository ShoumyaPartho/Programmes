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
	int n, ans = 0; cin >> n;

	if (n & 1) {
		ans = ((n + 1) >> 1);
		cout << ans << endl;

		for (int i = 1, j = 3 * n; i <= j; i += 3, j -= 3)
			cout << i << " " << j << endl;

		// cout << 3 * n - 2 << " " << 3 * n - 1 << endl;
	}

	else {
		ans = n >> 1;
		cout << ans << endl;

		for (int i = 1, j = 3 * n; i <= j; i += 3, j -= 3)
			cout << i << " " << j << endl;
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