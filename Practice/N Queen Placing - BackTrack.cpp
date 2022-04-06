#include<iostream>
#include<vector>
#include<ctime>
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void display(vector<vector<bool> > &grid, int n, int &cnt) {
	cout << cnt << "\n\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (grid[i][j]) cout << "Q ";
			else cout << "_ ";
		}
		cout << "\n";
	}
	cout << "\n\n";
}

bool isItSafe(vector<vector<bool> > &grid, int row, int col, int n) {
	for (int i = row - 1; i >= 0; i--) {
		if (grid[i][col]) return false;
	}
	for (int i = row - 1, j = col - 1; i >= 0 and j >= 0; i--, j--) {
		if (grid[i][j]) return false;
	}
	for (int i = row - 1, j = col + 1; i >= 0 and j <= n; i--, j++) {
		if (grid[i][j]) return false;
	}
	return true;
}

void nQueen(vector<vector<bool> > &grid, int row, int n, int &cnt) {
	if (row == n) {
		cnt++;
		display(grid, n, cnt);
		return;
	}
	for (int i = 0; i < n; i++) {
		if (isItSafe(grid, row, i, n)) {
			grid[row][i] = true;
			nQueen(grid, row + 1, n, cnt);
			grid[row][i] = false;
		}
	}
}

void solve() {
	int n, cnt = 0; cin >> n;
	vector<vector<bool> >grid(n, vector<bool>(n, false));
	nQueen(grid, 0, n, cnt);

}

int main() {
	fastIO();
	clock_t start = clock();
	// Writhe code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}