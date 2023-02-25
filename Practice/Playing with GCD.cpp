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
	int n, flag = 1; cin >> n;

	int ara[n + 1], b[n + 5] = {0};

	for (int i = 1; i <= n; i++)
		cin >> ara[i];

	b[1] = ara[1]; b[n + 1] = ara[n];

	for (int i = 1; i < n; i++) {
		b[i + 1] = ara[i + 1] * ara[i] / __gcd(ara[i + 1], ara[i]);

		if (__gcd(b[i + 1], b[i]) > ara[i]) {
			flag = 0;
			break;
		}
	}

	cout << (flag ? "YES" : "NO") << endl;
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