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
	int n, guess, cnt; cin >> n;
	int ara[n + 1] = {0};

	for (int i = 1; i <= n; i++)
		cin >> ara[i];

	for (guess = 0; guess <= n; guess++) {
		cnt = 0;

		for (int i = 1; i <= n; i++) {
			if (ara[i] > guess)
				cnt++;
		}

		if (cnt == guess) {
			cout << guess << endl;
			return;
		}
	}

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