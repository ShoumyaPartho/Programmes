// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
const ll INF = 1e18;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

ll findAns(vector<ll> &stones, vector<ll>&dp, ll x, ll n) {
	if (x == 1)
		return 0;
	if (x < 1)
		return -1;

	if (dp[x] != INF)
		return dp[x];

	ll t1 = INF, t2 = INF;

	if (x > 1)
		t1 = abs(stones[x] - stones[x - 1]) + findAns(stones, dp, x - 1, n);

	if (x > 2)
		t2 = abs(stones[x] - stones[x - 2]) + findAns(stones, dp, x - 2, n);

	dp[x] = min(dp[x], min(t1, t2));

	return dp[x];
}

void solve() {
	ll n; cin >> n;

	vector<ll> stones(n + 1, 0), dp(n + 1, INF);

	for (int i = 1; i <= n; i++)
		cin >> stones[i];

	cout << findAns(stones, dp, n, n) << endl;
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