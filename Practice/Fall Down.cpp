// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
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
	int tc, n, m, bottom; cin >> tc;

	while (tc--) {
		cin >> n >> m;
		string s; s = "...";

		vector<vector<char> > grid(n + 1, vector<char> (m + 1, '.'));

		for (int i = 1; i <= n; i++) {
			cin >> s;

			for (int j = 0; j < m; j++)
				grid[i][j + 1] = s[j];
		}

		for (int j = 1; j <= m; j++) {
			bottom = n + 1;

			for (int i = n; i >= 1; i--) {
				if (grid[i][j] == '*') {
					grid[i][j] = '.';
					grid[bottom - 1][j] = '*';
					bottom--;
				}

				else if (grid[i][j] == 'o')
					bottom = i;
			}
		}

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++)
				cout << grid[i][j];
			cout << endl;
		}

		cout << endl << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(3);
	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}