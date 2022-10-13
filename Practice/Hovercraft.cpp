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
	int l, w, tL, tW;

	while (cin >> l >> w) {
		if (l == 0 and w == 0)
			break;

		double ans = l + w, temp, eps = 1e-6;

		for (int i = 0; i <= l; i++) {
			for (int j = 0; j <= w; j++) {
				tL = l - i;
				tW = w - j;

				temp = sqrt((tL * tL * 1.0) + (tW * tW * 1.0));

				if ((i * 1.0) - temp >= eps)
					ans = min(ans, i + j + temp);
			}
		}

		cout << setprecision(4) << fixed << ans << endl;
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