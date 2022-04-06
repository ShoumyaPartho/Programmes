// Reference: BackTrack - part 2 - Last portion

#include<iostream>
#include<ctime>
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

void display(vector<vector<int> > &grid, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cout << grid[i][j] << " \n"[j == n - 1];
	}
	cout << "\n\n";
}

bool isItSafe(int n, int i, int j, vector<vector<bool> > &visited) {
	return i >= 0 and i<n and j >= 0 and j < n and visited[i][j] == false;
}

void knightsTour(vector<vector<int> > &grid, int row, int col, int cnt, int n, vector<vector<bool> > &visited) {
	if (cnt == n * n - 1) {
		grid[row][col] = cnt;
		display(grid, n);
		return;
	}
	if (cnt >= n * n) return;

	grid[row][col] = cnt;
	int dirX[] = { -2, -2, -1, 1, 2, 2, -1, 1};
	int dirY[] = { -1, 1, -2, -2, -1, 1, 2, 2};

	for (int i = 0; i < 8; i++) {
		if (isItSafe(n, row + dirX[i], col + dirY[i], visited)) {
			visited[row][col] = true;
			knightsTour(grid, row + dirX[i], col + dirY[i], cnt + 1, n, visited);
			visited[row][col] = false;
		}
	}
	grid[row][col] = -1;
}

void solve() {
	int n; cin >> n;
	vector<vector<int> > grid(n, vector<int>(n, -1));
	vector<vector<bool> > visited(n, vector<bool>(n, false));
	knightsTour(grid, 0, 0, 0, n, visited);
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