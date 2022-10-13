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
	string s; getline(cin, s);
	int num = 0;

	int tracks[10] = {0};

	for (auto i : s) {
		if (i == 'S') {
			if (num == 0)
				num++;
		}

		if (i == 'a') {
			if (num == 1)
				num++;
		}

		if (i == 'm') {
			if (num == 2)
				num++;
		}

		if (i == 's') {
			if (num == 3)
				num++;
		}
		if (i == 'u') {
			if (num == 4)
				num++;
		}

		if (i == 'n') {
			if (num == 5)
				num++;
		}

		if (i == 'g') {
			if (num == 6)
				num++;
		}
	}

	cout << (num == 7 ? "SRBD" : "GHOST") << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t = 1; // cin >> t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}