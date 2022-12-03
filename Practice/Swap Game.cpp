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
	int n, x, mini = 1e9 + 7, first, t;
	cin >> n; t = n;

	while (t--) {
		cin >> x;

		if (t == n - 1)
			first = x;
		mini = min(mini, x);
	}

	if (first > mini)
		cout << "ALICE" << endl;

	else
		cout << "BOB" << endl;
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