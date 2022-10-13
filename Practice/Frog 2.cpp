// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
const int INF = 1e9 + 7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void getAns(int *h, int n, int k) {
	vector<ll> ans(n + 1, INF); ans[0] = ans[1] = 0;

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			if (i - j >= 1)
				ans[i] = min(ans[i], ans[i - j] + abs(h[i] * 1ll - h[i - j]));
			else
				break;
		}
	}

	cout << ans[n] << endl;
}

ll findAns(int *h, int i, int n, int k, ll *dp) {
	if (i == 1)
		return 0;

	else if (dp[i] < INF)
		return dp[i];

	for (int j = 1; j <= k; j++) {
		if (i - j >= 1)
			dp[i] = min(dp[i], findAns(h, i - j, n, k, dp) + abs(h[i] - h[i - j]));
	}

	return dp[i];
}

void solve() {
	ll n, k; cin >> n >> k;
	int h[n + 1] = {0};

	for (int i = 1; i <= n; i++)
		cin >> h[i];

	getAns(h, n, k);


	// ll dp[n + 1];
	// memset(dp, INF, sizeof(dp));
	// dp[0] = dp[1] = 0;

	// cout << findAns(h, n, n, k, dp) << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t = 1; // cin >> t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}