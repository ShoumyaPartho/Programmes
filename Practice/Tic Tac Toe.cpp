// Solved by: Shoumya

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

int getX(vector<vector<char> > &grid) {
	int cnt = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (grid[i][j] == 'X')
				cnt++;
		}
	}
	return cnt;
}

int getO(vector<vector<char> > &grid) {
	int cnt = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (grid[i][j] == 'O')
				cnt++;
		}
	}
	return cnt;
}

int isFree(vector<vector<char> > &grid) {
	int cnt = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (grid[i][j] == '_')
				cnt++;
		}
	}
	return cnt;
}

int winX(vector<vector<char> > &grid) {

	for (int i = 0; i < 3; i++) {
		int cnt = 0;
		for (int j = 0; j < 3; j++) {
			if (grid[i][j] == 'X')
				cnt++;
		}
		if (cnt == 3)
			return 1;
	}

	for (int i = 0; i < 3; i++) {
		int cnt = 0;
		for (int j = 0; j < 3; j++) {
			if (grid[j][i] == 'X')
				cnt++;
		}
		if (cnt == 3)
			return 1;
	}

	if (grid[0][0] == grid[1][1] and grid[1][1] == grid[2][2] and grid[0][0] == 'X')
		return 1;

	if (grid[0][2] == grid[1][1] and grid[1][1] == grid[2][0] and grid[1][1] == 'X')
		return 1;

	return 0;
}

int winO(vector<vector<char> > &grid) {

	for (int i = 0; i < 3; i++) {
		int cnt = 0;
		for (int j = 0; j < 3; j++) {
			if (grid[i][j] == 'O')
				cnt++;
		}
		if (cnt == 3)
			return 1;
	}

	for (int i = 0; i < 3; i++) {
		int cnt = 0;
		for (int j = 0; j < 3; j++) {
			if (grid[j][i] == 'O')
				cnt++;
		}
		if (cnt == 3)
			return 1;
	}

	if (grid[0][0] == grid[1][1] and grid[1][1] == grid[2][2] and grid[0][0] == 'O')
		return 1;

	if (grid[0][2] == grid[1][1] and grid[1][1] == grid[2][0] and grid[1][1] == 'O')
		return 1;

	return 0;
}

void solve() {

	int tc, w1, w2, free, cntX, cntO; cin >> tc;

	while (tc--) {

		vector<vector<char> > grid(3, vector<char> (3, '0'));

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++)
				cin >> grid[i][j];
		}

		w1 = winX(grid), w2 = winO(grid);
		cntX = getX(grid), cntO = getO(grid);

		if (w1 == w2) {
			if (w1 == 1) {
				cout << 3 << endl;
				continue;
			}

			free = isFree(grid);

			if (free and (((cntX - cntO) == 0) or ((cntX - cntO) == 1))) {
				cout << 2 << endl;
				continue;
			}

			if (free and (not (((cntX - cntO) == 0) or ((cntX - cntO) == 1)))) {
				cout << 3 << endl;
				continue;
			}


			if ((not free) and ((cntX - cntO) == 1)) {
				cout << 1 << endl;
				continue;
			}

			if ((not free) and (not ((cntX - cntO) == 1))) {
				cout << 3 << endl;
				continue;
			}
		}

		else {

			if (w2 == 1 and (cntX - cntO == 0))
				cout << 1 << endl;

			else if (w1 == 1 and (cntX - cntO == 1))
				cout << 1 << endl;

			else
				cout << 3 << endl;
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