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
	int x, a, b, c, t; cin >> x >> a >> b >> c;
	int door[4] = {0};

	if (x == 1)
		t = a;
	else if (x == 2)
		t = b;
	else if (x == 3)
		t = c;

	else {
		cout << "NO" << endl;
		return;
	}
	door[x] = 1;
	x = t;

	if (x == 1)
		t = a;
	else if (x == 2)
		t = b;
	else if (x == 3)
		t = c;
	else {
		cout << "NO" << endl;
		return;
	}
	door[x] = 1;
	x = t;

	if (x == 1)
		t = a;
	else if (x == 2)
		t = b;
	else if (x == 3)
		t = c;
	else {
		cout << "NO" << endl;
		return;
	}
	door[x] = 1;
	x = t;

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