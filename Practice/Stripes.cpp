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
	vector<vector<char> > grid(9, vector<char>(9, '.'));
	string s;
	int cnt;

	for (int i = 1; i <= 8; i++) {
		cin >> s;

		for (int j = 1; j <= 8; j++)
			grid[i][j] = s[j - 1];
	}

	for (int i = 1; i <= 8; i++) {
		if (grid[i][1] != '.') {
			cnt = 0;

			for (int j = 1; j <= 8; j++) {
				if (grid[i][j] == 'R')
					cnt++;
			}

			if (cnt == 8) {
				cout << 'R' << endl;
				return;
			}
		}
	}

	for (int i = 1; i <= 8; i++) {
		if (grid[1][i] != '.') {
			cnt = 0;

			for (int j = 1; j <= 8; j++) {
				if (grid[j][i] == 'B')
					cnt++;
			}

			if (cnt == 8) {
				cout << 'B' << endl;
				return;
			}
		}
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