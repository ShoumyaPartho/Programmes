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
	int n, ara[10010] = {0}, x, cnt = 0; cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		ara[x]++;
	}

	for (int i = 1; i <= 10000; i++) {
		if (ara[i])
			cnt += ara[i] - 1;
	}

	cout << (cnt % 2 ? n - cnt - 1 : n - cnt) << endl;
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