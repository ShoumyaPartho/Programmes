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
	ll n, x, ans = 0; cin >> n;
	ll t = n, freq[n + 5] = {0};

	while (t--) {
		cin >> x;
		freq[x]++;
	}

	x = freq[0];

	for (int i = 1; i <= n; i++) {
		if (freq[i] and freq[i - 1] and ((i ^ (i - 1)) <= 1ll))
			ans = max(ans, freq[i] + freq[i - 1]);

		if (freq[i])
			x = max(x, freq[i]);
	}

	if (not ans) {
		cout << n - x << endl;
		return;
	}

	cout << min(n - ans, n - x) << endl;
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