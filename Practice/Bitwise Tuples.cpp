// Solved by: Shoumya

#include<iostream>
#include<ctime>
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

ll getNum(ll n) {
	if (n == 0)
		return 1ll;

	if (n == 1)
		return 2ll;

	ll temp = getNum(n / 2);

	if (n & 1ll)
		return ((((temp % MOD) * (temp % MOD)) % MOD) * (2ll % MOD)) % MOD;

	else
		return ((temp % MOD) * (temp % MOD) % MOD);
}

ll getRes(ll num, ll m) {
	if (m == 0)
		return 1ll;

	if (m == 1)
		return num;

	ll temp = getRes(num, m / 2);

	if (m & 1ll)
		return ((((temp % MOD) * (temp % MOD)) % MOD) * (num % MOD)) % MOD;

	else
		return ((temp % MOD) * (temp % MOD) % MOD);
}

void solve() {
	ll tc, n, m, res, num; cin >> tc;

	while (tc--) {
		cin >> n >> m;

		num = getNum(n);
		res = getRes(num - 1ll, m);

		cout << res << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}