// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const ll MOD = 1e9 + 7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

ll powOf2(ll n) {
	if (n == 1)
		return 2ll;

	if (n == 0)
		return 1ll;

	ll temp = powOf2(n / 2);

	if (n & 1)
		return ((temp % MOD) * (temp % MOD) * (2 % MOD)) % MOD;

	else
		return ((temp % MOD) * (temp % MOD)) % MOD;
}

void solve() {
	ll tc, n, m, l, r, x, bitOr; cin >> tc;

	while (tc--) {
		cin >> n >> m; bitOr = 0;

		while (m--) {
			cin >> l >> r >> x;
			bitOr |= x;
		}

		vector<ll> powOf2Ara(n + 1, 1);

		for (int i = 1; i <= n; i++)
			powOf2Ara[i] = ((powOf2Ara[i - 1] % MOD) * (2ll % MOD)) % MOD;

		// cout << (bitOr % MOD) * (powOf2(n - 1) % MOD) % MOD << endl;
		cout << ((bitOr % MOD) * powOf2Ara[n - 1]) % MOD << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(3);
	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}