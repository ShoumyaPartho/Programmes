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
	int tc, n, k; cin >> tc;

	while (tc--) {
		cin >> n >> k;

		if (k > ((n + 1) >> 1)) {
			cout << -1 << endl;
			continue;
		}

		vector<vector<char> > grid(n + 1, vector<char> (n + 1, '.'));

		for (int i = 1; i <= n and k; i += 2, k--)
			grid[i][i] = 'R';

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++)
				cout << grid[i][j];
			cout << endl;
		}
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