// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<string>
#include<vector>
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
	int tc, n, m, x, y, cost; cin >> tc;

	while (tc--) {

		cin >> n >> m >> x >> y; y = min(y, x * 2), cost = 0;

		vector<vector<char> > grid(n + 1, vector<char> (m + 2, '0'));

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++)
				cin >> grid[i][j];
		}

		for (int i = 1; i <= n; i++) {

			for (int j = 1; j <= m; j++) {

				if (grid[i][j] == '.') {

					if (grid[i][j + 1] == '.') {
						cost += y;
						j++;
					}

					else
						cost += x;
				}
			}
		}

		cout << cost << endl;
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