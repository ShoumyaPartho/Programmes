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
	int n, x, tSum, ans = 0; cin >> n;
	vector<pair<int, int> > a(n + 1), b(n + 1), c(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> x;

		a[i].first = x;
		a[i].second = i;
	}

	for (int i = 1; i <= n; i++) {
		cin >> x;

		b[i].first = x;
		b[i].second = i;
	}

	for (int i = 1; i <= n; i++) {
		cin >> x;

		c[i] = {x, i};
	}

	sort(a.begin() + 1, a.end());
	sort(b.begin() + 1, b.end());
	sort(c.begin() + 1, c.end());

	for (int i = n - 2; i <= n; i++) {
		for (int j = n - 2; j <= n; j++) {
			for (int k = n - 2; k <= n; k++) {
				if ((a[i].second != b[j].second) and (a[i].second != c[k].second) and (b[j].second != c[k].second))
					ans = max(ans, a[i].first + b[j].first + c[k].first);
			}
		}
	}

	// tSum = a[n - 2].first;
	// tSum += b[n - 1].first;
	// tSum += c[n].first;

	// ans = max(ans, tSum);

	// tSum = a[n - 2].first;
	// tSum += b[n].first;
	// tSum += c[n - 1].first;

	// ans = max(ans, tSum);

	// tSum = a[n - 1].first;
	// tSum += b[n - 2].first;
	// tSum += c[n].first;

	// ans = max(ans, tSum);

	// tSum = a[n - 1].first;
	// tSum += b[n].first;
	// tSum += c[n - 2].first;

	// ans = max(ans, tSum);

	// tSum = a[n].first;
	// tSum += b[n - 1].first;
	// tSum += c[n - 2].first;

	// ans = max(ans, tSum);

	// tSum = a[n].first;
	// tSum += b[n - 2].first;
	// tSum += c[n - 1].first;

	// ans = max(ans, tSum);

	cout << ans << endl;
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