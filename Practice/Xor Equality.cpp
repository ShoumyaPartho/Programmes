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

ll calculate(ll n) {

	if (n == 0)
		return 1;

	if (n == 1)
		return 2;

	ll temp;

	if (n % 2 == 0) {

		temp = calculate(n / 2ll);

		return ((temp % MOD) * (temp % MOD)) % MOD;
	}

	else if (n % 2 == 1) {

		temp = calculate(n / 2ll);

		return ((temp % MOD) * (temp % MOD) * (2ll % MOD)) % MOD;
	}
}

void solve() {

	ll tc, n, ans; cin >> tc;

	while (tc--) {

		cin >> n;

		n--;

		ans = calculate(n);

		cout << ans << endl;

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