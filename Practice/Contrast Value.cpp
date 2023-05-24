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
	int n, cur, it = 2, ans; cin >> n;
	vector<int> a(n + 1), ara(n + 1);

	for (int i = 1; i <= n; i++)
		cin >> ara[i];

	cur = a[1] = ara[1];

	for (int i = 2; i <= n; i++) {
		if (ara[i] == cur)
			continue;

		a[it++] = ara[i];
		cur = ara[i];
	}

	n = it - 1;

	ans = n;

	for (int i = 1; i + 2 <= n; i++) {
		ans -= (a[i] < a[i + 1] && a[i + 1] < a[i + 2]);
		ans -= (a[i] > a[i + 1] && a[i + 1] > a[i + 2]);
	}

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