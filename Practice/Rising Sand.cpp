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
	int n, k, cnt = 0; cin >> n >> k;
	int ara[n + 1];

	for (int i = 1; i <= n; i++)
		cin >> ara[i];

	if (k == 1)
		cout << ((n - 2) + 1) / 2 << endl;

	else {
		for (int i = 2; i < n; i++) {
			if (ara[i] > (ara[i - 1] + ara[i + 1]))
				cnt++;
		}
		cout << cnt << endl;
	}
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