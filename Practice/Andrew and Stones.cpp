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
	ll n, flag = 0, ans = 0; cin >> n;
	ll ara[n + 1];

	for (int i = 1; i <= n; i++)
		cin >> ara[i];

	if (n == 3 and (ara[2] % 2)) {
		cout << -1 << endl;
		return;
	}

	for (int i = 2; i < n; i++) {
		if (ara[i] > 1) {
			flag = 1;
			break;
		}
	}

	if (not flag) {
		cout << -1 << endl;
		return;
	}

	for (int i = 2; i < n; i++)
		ans += (ara[i] + 1) / 2;

	cout << ans << endl;
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