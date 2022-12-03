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
	ll n, t1, t2, tt1, tt2; cin >> n;
	string a, b; cin >> a >> b;
	ll dp[n + 5] = {0};

	for (int i = 1; i <= n; i++) {
		if (a[i - 1] <= b[i - 1])
			t1 = b[i - 1] - a[i - 1];

		else
			t1 = ('z' - a[i - 1]) + (b[i - 1] - 'a' + 1);

		if (b[i - 1] <= a[i - 1])
			t2 = a[i - 1] - b[i - 1];

		else
			t2 = ('z' - b[i - 1]) + (a[i - 1] - 'a' + 1);

		tt1 = dp[i - 1] + t1;
		tt2 = dp[i - 1] - t2;

		if (abs(tt2) < tt1)
			dp[i] = tt2;

		else
			dp[i] = tt1;
	}

	cout << abs(dp[n]) << endl;
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