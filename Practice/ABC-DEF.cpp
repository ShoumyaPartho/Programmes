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

const ll MOD = 998244353;

void solve() {
	ll a, b, c, d, e, f, t1, t2;
	cin >> a >> b >> c >> d >> e >> f;

	t1 = ((a % MOD) * (b % MOD)) % MOD;
	t1 = ((t1 % MOD) * (c % MOD)) % MOD;

	t2 = ((d % MOD) * (e % MOD)) % MOD;
	t2 = ((t2 % MOD) * (f % MOD)) % MOD;

	cout << (((t1 % MOD) - (t2 % MOD)) + MOD) % MOD << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}