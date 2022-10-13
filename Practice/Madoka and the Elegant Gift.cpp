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

bool isInside(int i, int j, int n, int m) {
	return (i >= 1 and i <= n and j >= 1 and j <= m);
}

void solve() {
	int n, m, flag = 1; cin >> n >> m;
	vector<vector<int> > grid(n + 1, vector<int> (m + 1, 0));
	string s;

	for (int i = 1; i <= n; i++) {
		cin >> s;
		for (int j = 1; j <= m; j++)
			grid[i][j] = s[j - 1] - '0';
	}

	for (int i = 1; i <= n and flag; i++) {
		for (int j = 1; j <= m; j++) {
			if (grid[i][j]) {
				if (isInside(i, j + 1, n, m) and isInside(i - 1, j + 1, n, m) and isInside(i - 1, j, n, m) and
				        grid[i][j + 1] and grid[i - 1][j + 1] and (grid[i - 1][j] == 0)) {
					cout << "NO" << endl;
					return;
				}

				if (isInside(i, j + 1, n, m) and isInside(i + 1, j + 1, n, m) and isInside(i + 1, j, n, m) and
				        grid[i][j + 1] and grid[i + 1][j + 1] and (grid[i + 1][j] == 0)) {
					cout << "NO" << endl;
					return;
				}

				if (isInside(i, j - 1, n, m) and isInside(i - 1, j - 1, n, m) and isInside(i - 1, j, n, m) and
				        grid[i][j - 1] and grid[i - 1][j - 1] and (grid[i - 1][j] == 0)) {
					cout << "NO" << endl;
					return;
				}

				if (isInside(i, j - 1, n, m) and isInside(i + 1, j - 1, n, m) and isInside(i + 1, j, n, m) and
				        grid[i][j - 1] and grid[i + 1][j - 1] and (grid[i + 1][j] == 0)) {
					cout << "NO" << endl;
					return;
				}
			}
		}
	}

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