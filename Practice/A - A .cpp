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
	ll n; cin >> n;
	vector<ll> r(n + 1, 0), g(n + 1, 0), b(n + 1, 0), dpR(n + 1, 0), dpG(n + 1, 0), dpB(n + 1, 0);

	for (int i = 1; i <= n; i++)
		cin >> r[i] >> g[i] >> b[i];

	if (n == 1) {
		cout << min(r[1], min(g[1], b[1])) << endl;
		return;
	}

	dpR[1] = r[1], dpG[1] = g[1], dpB[1] = b[1];

	for (int i = 2; i <= n; i++) {
		dpR[i] = r[i] + min(dpG[i - 1], dpB[i - 1]);
		dpG[i] = g[i] + min(dpR[i - 1], dpB[i - 1]);
		dpB[i] = b[i] + min(dpG[i - 1], dpR[i - 1]);
	}

	cout << min(dpR[n], min(dpG[n], dpB[n])) << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cout << "Case " << tc << ": ";
		solve();
	}

	return 0;
}