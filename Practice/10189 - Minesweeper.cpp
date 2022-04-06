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
	int n, m, cnt, tc = 0;

	while (cin >> n >> m, (n or m)) {

		vector<vector<char> > field(n + 1, vector<char> (m + 1, '.'));
		vector<vector<char> > grid(n + 1, vector<char> (m + 1, '0'));

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++)
				cin >> field[i][j];
		}

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {

				if (field[i][j] == '*')
					grid[i][j] = '*';

				else {

					cnt = 0;

					if (j + 1 <= m and field[i][j + 1] == '*')
						cnt++;

					if (j + 1 <= m and i + 1 <= n and field[i + 1][j + 1] == '*')
						cnt++;

					if (i + 1 <= n and field[i + 1][j] == '*')
						cnt++;

					if (i + 1 <= n and j - 1 >= 1 and field[i + 1][j - 1] == '*')
						cnt++;

					if (j - 1 >= 1 and field[i][j - 1] == '*')
						cnt++;

					if (j - 1 >= 1 and i - 1 >= 1 and field[i - 1][j - 1] == '*')
						cnt++;

					if (i - 1 >= 1 and field[i - 1][j] == '*')
						cnt++;

					if (j + 1 <= m and i - 1 >= 1 and field[i - 1][j + 1] == '*')
						cnt++;

					grid[i][j] += cnt;
				}
			}
		}

		if (tc)
			cout << endl;

		cout << "Field #" << ++tc << ":" << endl;

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cout << grid[i][j];

				if (j == m)
					cout << endl;
			}
		}
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