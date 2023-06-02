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
	int n; cin >> n;

	if (n == 1) {
		cout << 1 << endl;
		return;
	}

	if (n & 1) {
		cout << -1 << endl;
		return;
	}

	int b[n + 1] = {0}, lo = 2, hi = n - 1; b[1] = n, b[n] = 1;

	for (int i = 2, j = n - 1; i <= j; i++, j--) {
		if (i % 2)
			b[i] = lo++, b[j] = lo++;

		else
			b[i] = hi--, b[j] = hi--;
	}

	for (int i = 1; i <= n; i++)
		cout << b[i] << " \n"[i == n];
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