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

void findAns(ll n, ll k) {
	ll ans = 1;

	for (int i = 1, p = n; i <= k; i++, p--) {
		ans *= p;
		ans /= i;
		ans *= p;
	}

	cout << ans << endl;
}

ll fact[25];

void getFactorials() {
	fact[0] = fact[1] = 1;

	for (int i = 2; i < 25; i++)
		fact[i] = i * fact[i - 1];
}

ll dp[32][32];

ll findNcR(ll n, ll r) {
	if (n == r or r == 0)
		return 1;

	if (r == 1)
		return n;

	if (dp[n][r] != -1)
		return dp[n][r];

	return dp[n][r] = findNcR(n - 1, r - 1) + findNcR(n - 1, r);
}

void getAns(ll n, ll k) {
	getFactorials();
	memset(dp, -1, sizeof(dp));

	ll ans = findNcR(n, k); ans = ans * ans * fact[k];

	cout << ans << endl;
}

void solve() {
	ll n, k; cin >> n >> k;

	if (k > n) {
		cout << 0 << endl;
		return;
	}

	// findAns(n, k);

	getAns(n, k);
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cout << "Case " << tc << ": ";
		solve();
	}

	return 0;
}