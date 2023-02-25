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
	int n, x, flag = 1; cin >> n;
	int pet[105] = {0};

	while (n--) {
		cin >> x;
		pet[x]++;
	}

	for (int i = 1; i <= 100; i++) {
		if (pet[i] % 2)
			flag = 0;
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