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

bool isOk(int i, int j, int n, int m) {
	if (i >= 1 and j >= 1 and i <= n and j <= m)
		return true;

	return false;
}

void solve() {
	int n, m, zero = 0, one = 0, conZero = 0; cin >> n >> m;
	vector < vector<char> > grid(n + 1, vector<char>(m + 1));
	string s;

	for (int i = 1; i <= n; i++) {
		cin >> s;

		for (int j = 1; j <= m; j++)
			grid[i][j] = s[j - 1];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (grid[i][j] == '1')
				one++;

			else
				zero++;

			if (grid[i][j] == '0' and isOk(i - 1, j, n, m))
				conZero += (grid[i - 1][j] == '0');

			if (grid[i][j] == '0' and isOk(i, j - 1, n, m))
				conZero += (grid[i][j - 1] == '0');

			if (grid[i][j] == '0' and isOk(i - 1, j - 1, n, m))
				conZero += (grid[i - 1][j - 1] == '0');

			if (grid[i][j] == '0' and isOk(i - 1, j + 1, n, m))
				conZero += (grid[i - 1][j + 1] == '0');
		}
	}

	if (conZero)
		cout << one << endl;

	else if (zero)
		cout << one - 1 << endl;

	else
		cout << one - 2 << endl;
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