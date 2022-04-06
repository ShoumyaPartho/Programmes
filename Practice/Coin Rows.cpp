// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
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
	ll tc, m, down, t1, t2; cin >> tc;

	while (tc--) {

		cin >> m;
		vector<vector<ll> > grid(3, vector<ll> (m + 1, 0)), mat(3, vector<ll> (m + 1, 0));

		for (int i = 1; i <= 2; i++) {
			for (int j = 1; j <= m; j++)
				cin >> grid[i][j];
		}

		mat[2][1] = grid[2][1]; mat[1][m] = grid[1][m]; down = 1, t1 = t2 = 0;

		for (int i = m - 1; i > 1; i--)
			mat[1][i] = grid[1][i] + mat[1][i + 1]; // Suffix Sum

		for (int j = 2; j < m; j++)
			mat[2][j] = grid[2][j] + mat[2][j - 1]; // Prefix Sum

		grid[1][1] = grid[2][m] = -1;

		for (int i = 1, j = 1; i <= 2 and j <= m;) {

			if ((not down) or (i == 2)) {
				grid[i][j] = -1;
				j++;
			}

			else if ((j + 1) <= m and i == 1 and mat[i][j + 1] >= mat[2][j]) {
				grid[i][j] = -1;
				j++;
			}

			else if (j == m and i == 1) {
				grid[i][j] = -1;
				i++;
			}

			else {
				down = 0;
				grid[i][j] = -1;
				i++;
			}
		}

		for (int i = m; i >= 1; i--) {
			if (grid[1][i] != -1)
				t1 += grid[1][i];
		}

		for (int i = m; i >= 1; i--) {
			if (grid[2][i] != -1)
				t2 += grid[2][i];
		}

		cout << max(t1, t2) << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}