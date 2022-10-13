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
	ll n, x, MOD = 1e9 + 7; cin >> n >> x;
	ll coins[n + 1], value[x + 1] = {0}; value[0] = 1;

	for (int i = 1; i <= n; i++)
		cin >> coins[i];

	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= n; j++) {
			if (coins[j] <= i)
				value[i] = (value[i] + value[i - coins[j]]) % MOD;
		}
	}

	cout << value[x] << endl;
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