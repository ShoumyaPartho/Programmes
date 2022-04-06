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
	int row, col, t1, t2; cin >> row >> col;

	vector<vector<int> > grid(row + 1, vector<int> (col + 1, 0));
	vector<vector<char> > board(row + 1, vector<char> (col + 1, '.'));

	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++)
			cin >> board[i][j];
	}

	for (int i = row; i; i--) {
		for (int j = col; j; j--) {

			if (board[i][j] == '#') {
				grid[i][j] = 0;
				continue;
			}

			if (j + 1 <= col)
				t1 = grid[i][j + 1];

			else
				t1 = 0;

			if (i + 1 <= row)
				t2 = grid[i + 1][j];

			else
				t2 = 0;

			grid[i][j] = max(t1, t2) + 1;
		}
	}

	cout << grid[1][1] << endl;
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