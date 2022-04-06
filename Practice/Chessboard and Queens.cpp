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

bool isItSafe(int i, int j, vector<vector<char> > &grid) {
	if (grid[i][j] == '*')
		return false;

	for (int a = i - 1; a >= 1; a--) {
		if (grid[a][j] == '1')
			return false;
	}

	for (int a = i - 1, b = j - 1; a >= 1 and b >= 1; a--, b--) {
		if (grid[a][b] == '1')
			return false;
	}

	for (int a = i - 1, b = j + 1; a >= 1 and b <= 8; a--, b++) {
		if (grid[a][b] == '1')
			return false;
	}

	return true;
}

void findWays(int row, vector<vector<char> > &grid, int &cnt) {

	if (row == 9) {
		cnt++;
		return;
	}

	for (int j = 1; j <= 8; j++) {
		if (isItSafe(row, j, grid)) {
			grid[row][j] = '1';
			findWays(row + 1, grid, cnt);
			grid[row][j] = '.';
		}
	}
}

void solve() {
	vector<vector<char> > grid(9, vector<char>(9, '.') );
	int cnt = 0;

	for (int i = 1; i <= 8; i++) {
		for (int j = 1; j <= 8; j++)
			cin >> grid[i][j];
	}

	findWays(1, grid, cnt);

	cout << cnt << endl;
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