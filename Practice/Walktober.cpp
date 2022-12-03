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
	ll m, n, p, x, ans = 0; cin >> m >> n >> p;
	vector<ll> maxi(n + 1, 0), john(n + 1, 0);

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> x;

			maxi[j] = max(maxi[j], x);
			if (i == p)
				john[j] = x;
		}
	}

	for (int i = 1; i <= n; i++)
		ans += max(0ll, maxi[i] - john[i]);

	cout << ans << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cout << "Case #" << tc << ": ";
		solve();
	}

	return 0;
}