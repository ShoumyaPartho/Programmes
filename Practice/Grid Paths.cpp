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

void countPaths(int i, int j, int idx, vector<vector<int> > &grid, string &s, int &cnt) {
	// cout << i << " " << j << endl;

	if (idx == 48) {
		if (i == 7 and j == 1)
			cnt++;

		return;
	}

	if (i == 7 and j == 1)
		return;

	if (grid[i][j])
		return;

	if (((j - 1 < 1) or grid[i][j - 1]) and
	        ((j + 1 > 7) or grid[i][j + 1]) and
	        ((i - 1 >= 1) and grid[i - 1][j] == 0) and
	        ((i + 1 <= 7) and grid[i + 1][j] == 0))
		return;

	if (((i - 1 < 1) or grid[i - 1][j]) and
	        ((i + 1 > 7) or grid[i + 1][j]) and
	        ((j - 1 >= 1) and grid[i][j - 1] == 0) and
	        ((j + 1 <= 7) and grid[i][j + 1] == 0))
		return;

	if ((i - 1 >= 1 and j - 1 >= 1) and
	        grid[i - 1][j - 1] and
	        (j - 1 < 1 or grid[i][j - 1] == 0) and
	        (i - 1 < 1 or grid[i - 1][j] == 0))
		return;

	if ((i - 1 >= 1 and j + 1 <= 7) and
	        grid[i - 1][j + 1] and
	        (j + 1 > 7 or grid[i][j + 1] == 0) and
	        (i - 1 < 1 or grid[i - 1][j] == 0))
		return;

	if ((i + 1 <= 7 and j - 1 >= 1) and
	        grid[i + 1][j - 1] and
	        (j - 1 < 1 or grid[i][j - 1] == 0) and
	        (i + 1 > 7 or grid[i + 1][j] == 0))
		return;

	if ((i + 1 <= 7 and j + 1 <= 7) and
	        grid[i + 1][j + 1] and
	        (j + 1 > 7 or grid[i][j + 1] == 0) and
	        (i + 1 > 8 or grid[i + 1][j] == 0))
		return;


	grid[i][j] = 1;

	if (s[idx] == 'D' and i + 1 <= 7)
		countPaths(i + 1, j, idx + 1, grid, s, cnt);

	else if (s[idx] == 'U' and i - 1 >= 1)
		countPaths(i - 1, j, idx + 1, grid, s, cnt);

	else if (s[idx] == 'L' and j - 1 >= 1)
		countPaths(i, j - 1, idx + 1, grid, s, cnt);

	else if (s[idx] == 'R' and j + 1 <= 7)
		countPaths(i, j + 1, idx + 1, grid, s, cnt);

	else if (s[idx] == '?') {

		if (i + 1 <= 7)
			countPaths(i + 1, j, idx + 1, grid, s, cnt);

		if (i - 1 >= 1)
			countPaths(i - 1, j, idx + 1, grid, s, cnt);

		if (j - 1 >= 1)
			countPaths(i, j - 1, idx + 1, grid, s, cnt);

		if (j + 1 <= 7)
			countPaths(i, j + 1, idx + 1, grid, s, cnt);
	}

	grid[i][j] = 0;
	return;
}

void solve() {
	vector<vector<int> > grid(8, vector<int> (8, 0));
	string s; cin >> s;
	int cnt = 0;

	countPaths(1, 1, 0, grid, s, cnt);

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