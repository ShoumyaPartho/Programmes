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
	int n, l, r; cin >> n;
	l = 1, r = n;

	if (n % 2 == 0) {
		for (int i = 1; i <= (n / 2); i++) {
			cout << r << " " << l << " \n"[i == (n / 2)];
			r--; l++;
		}
	}

	else {
		for (int i = 1; i <= (n / 2); i++) {
			cout << r << " " << l << " ";
			r--; l++;
		}
		cout << r << endl;
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