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
	ll n, a, b, lim, x = 0, t1, t2, t; cin >> n >> a >> b;
	lim = (1ll << n) - 1;

	for (int i = 0; i <= 35; i++) {
		t = (1ll << i);
		if (t > lim)
			break;

		t1 = x;
		t2 = x | (1ll << i);

		if (((a ^ t1) * (b ^ t1)) > ((a ^ t2) * (b ^ t2)))
			x = t1;

		else
			x = t2;
	}

	cout << x << endl;
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