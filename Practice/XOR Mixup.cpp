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
	int n, xr = 0, t; cin >> n;
	int ara[n + 1];

	for (int i = 1; i <= n; i++) {
		cin >> ara[i];
		xr ^= ara[i];
	}

	for (int i = 1; i <= n; i++) {
		t = xr ^ ara[i];
		if (t == ara[i]) {
			cout << ara[i] << endl;
			return;
		}
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