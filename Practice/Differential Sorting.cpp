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
	int n; cin >> n;
	int ara[n];

	for (int i = 0; i < n; i++)
		cin >> ara[i];

	if (ara[n - 2] > ara[n - 1]) {
		cout << -1 << endl;
		return;
	}

	if (ara[n - 1] >= 0) {
		cout << n - 2 << endl;

		for (int i = 0; i < n - 2; i++)
			cout << i + 1 << " " << n - 1 << " " << n << endl;
		return;
	}

	if (is_sorted(ara, ara + n))
		cout << 0 << endl;

	else
		cout << -1 << endl;
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