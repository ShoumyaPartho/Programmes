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
	ll n, x, prevWithX = 0, prevNoX = 0, ansNoX = 0, ansWithX = 0, a, b, ans = 0, t1, t2;
	cin >> n >> x;

	if (n == 1) {
		cin >> x;
		cout << 0 << endl;
		return;
	}

	cin >> a;

	for (int i = 2; i <= n; i++) {
		cin >> b;
		t1 = (b ^ a) + prevNoX;
		t2 = (b ^ (x + a)) + prevWithX;

		ansNoX = max(t1, t2);

		t1 = ((b + x) ^ a) + prevNoX;
		t2 = ((b + x) ^ (x + a)) + prevWithX;

		ansWithX = max(t1, t2);

		a = b; prevWithX = ansWithX; prevNoX = ansNoX;
	}

	cout << max(ansWithX, ansNoX) << endl;
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