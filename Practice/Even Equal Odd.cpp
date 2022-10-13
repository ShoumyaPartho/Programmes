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
	ll n, bits[50] = {0}, odd = 0 , even = 0, cnt = 0; cin >> n;
	ll ara[2 * n + 1] = {0};

	for (int i = 1; i <= 2 * n; i++) {
		cin >> ara[i];
		if (ara[i] % 2)
			odd++;
		else
			even++;
	}

	if (odd > n) {
		cout << odd - n << endl;
		return;
	}

	if (odd == n) {
		cout << 0 << endl;
		return;
	}

	for (ll i = 1; i <= 40; i++) {
		for (int j = 1; j <= n + n; j++) {
			if (ara[j] and (ara[j] % 2 == 0) and (ara[j] & (1ll << i))) {
				ara[j] = 0;
				bits[i]++;
			}
		}
	}

	for (int i = 1; i <= 35; i++) {
		if (odd + bits[i] <= n) {
			cnt += (bits[i] * i);
			odd += bits[i];
		}

		else {
			cnt += ((n - odd) * i);
			break;
		}
	}

	cout << cnt << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}