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
	ll n, m, sum, ans = 0, temp; cin >> n >> m;
	ll data[m + 1][n + 1];

	for (int j = 1; j <= n; j++) {
		for (int i = 1; i <= m; i++)
			cin >> data[i][j];
	}

	for (int i = 1; i <= m; i++) {
		sort(data[i] + 1, data[i] + 1 + n);
		sum = data[i][1];

		for (int j = 2; j <= n; j++) {
			temp = data[i][j] * (j - 1) - sum;
			ans += temp;
			sum += data[i][j];
		}
	}

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