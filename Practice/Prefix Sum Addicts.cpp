// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
#define NEG -1e9
#define POS -NEG

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	ll n, k, temp; cin >> n >> k;
	ll ara[k + 1] = {0}, preSum[k + 1] = {0}; ara[1] = 1e9 + 50;

	for (int i = 1; i <= k; i++)
		cin >> preSum[i];

	if (n == 1) {
		cout << "YES" << endl;
		return;
	}

	if (k == 1) {
		temp = (preSum[1] + n - 1) / n;

		if (((n - 1)*temp) < (preSum[1] - temp))
			cout << "NO" << endl;

		else
			cout << "YES" << endl;

		return;
	}

	for (int i = 2; i <= k; i++) {
		ara[i] = preSum[i] - preSum[i - 1];

		if (i > 2 and ara[i] < ara[i - 1]) {
			cout << "NO" << endl;
			return;
		}
	}

	if (preSum[1] > (ara[2] * (n - k + 1)))
		cout << "NO" << endl;

	else
		cout << "YES" << endl;
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