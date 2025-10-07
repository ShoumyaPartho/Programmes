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
	ll n, mod = 1; cin >> n;
	ll nums[n + 5];

	for (int i = 1; i <= n; i++)
		cin >> nums[i];

	for (int i = 0; i < 58; i++) {
		mod = (1ll << i);

		for (int j = 1; j <= n; j++)
			nums[j] %= mod;
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