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
	int n, k; cin >> n >> k;

	vector<int> aara(n + 1, 0), bara(n + 1, 0);
	vector<bool> dp(n + 1, false), ep(n + 1, false);
	dp[1] = ep[1] = true;

	for (int i = 1; i <= n; i++)
		cin >> aara[i];

	for (int i = 1; i <= n; i++)
		cin >> bara[i];

	for (int i = 2; i <= n; i++) {
		if (dp[i - 1]) {
			if (abs(aara[i - 1] - aara[i]) <= k)
				dp[i] = true;

			if (abs(aara[i - 1] - bara[i]) <= k)
				ep[i] = true;
		}

		if (ep[i - 1]) {
			if (abs(bara[i - 1] - aara[i]) <= k)
				dp[i] = true;

			if (abs(bara[i - 1] - bara[i]) <= k)
				ep[i] = true;
		}
	}

	cout << ((dp[n] or ep[n]) ? "Yes" : "No") << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t = 1;// cin >> t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}