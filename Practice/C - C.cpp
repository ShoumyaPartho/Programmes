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
	ll n, a, b, c, d, e, f, MOD = 1e7 + 7;
	cin >> a >> b >> c >> d >> e >> f >> n;
	ll ara[n + 10] = {0};
	ara[1] = a, ara[2] = b, ara[3] = c, ara[4] = d, ara[5] = e, ara[6] = f;

	for (int i = 7; i <= n + 1; i++)
		ara[i] = (ara[i - 1] + ara[i - 2] + ara[i - 3] + ara[i - 4] + ara[i - 5] + ara[i - 6]) % MOD;

	cout << ara[n + 1] % MOD << endl;
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