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
	vector<ll> dp(n + 1, INT_MAX);
	dp[0] = 0;

	for (int i = 1; i <= n; i++) {
		string s = to_string(i);

		for (auto x : s)
			dp[i] = min(dp[i], dp[i - (x - '0')] + 1);
	}

	cout << dp[n] << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t = 1; // cin>>t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}