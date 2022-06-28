// Solved by: Shoumya

#include<bits/stdc++.h>
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
	vector<vector<int> > grid(5, vector<int>(5, 0)), vis(5, vector<int>(5, 0));
	int dir, temp, place;

	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 4; j++)
			cin >> grid[i][j];
	}

	cin >> dir;

	if (dir == 0) {
		for (int i = 1; i <= 4; i++) {
			for (int j = 1; j <= 4; j++) {
				if (grid[i][j] == 0)
					continue;
				for (int ptr = j - 1; ptr >= 1; ptr--) {
					if (grid[i][ptr] and (grid[i][ptr] != grid[i][j])) {
						swap(grid[i][j], grid[i][ptr + 1]);
						break;
					}
					else if (grid[i][ptr] and (grid[i][ptr] == grid[i][j]) and vis[i][ptr] == 0) {
						grid[i][ptr] += grid[i][j];
						grid[i][j] = 0;
						vis[i][ptr] = 1;
						break;
					}
					else if (grid[i][ptr] and (grid[i][ptr] == grid[i][j]) and vis[i][ptr] == 1) {
						swap(grid[i][j], grid[i][ptr + 1]);
						break;
					}

					else if (ptr == 1 and grid[i][ptr] == 0)
						swap(grid[i][j], grid[i][ptr]);
				}
			}
		}
	}

	if (dir == 1) {
		for (int j = 1; j <= 4; j++) {
			for (int i = 1; i <= 4; i++) {
				if (grid[i][j] == 0)
					continue;
				for (int ptr = i - 1; ptr >= 1; ptr--) {
					if (grid[ptr][j] and (grid[ptr][j] != grid[i][j])) {
						swap(grid[i][j], grid[ptr + 1][j]);
						break;
					}
					else if (grid[ptr][j] and (grid[ptr][j] == grid[i][j]) and vis[ptr][j] == 0) {
						grid[ptr][j] += grid[i][j];
						grid[i][j] = 0;
						vis[ptr][j] = 1;
						break;
					}

					else if (grid[ptr][j] and (grid[ptr][j] == grid[i][j]) and vis[ptr][j] == 1) {
						swap(grid[i][j], grid[ptr + 1][j]);
						break;
					}

					else if (ptr == 1 and grid[ptr][j] == 0)
						swap(grid[i][j], grid[ptr][j]);
				}
			}
		}
	}

	if (dir == 2) {
		for (int i = 1; i <= 4; i++) {
			for (int j = 4; j >= 1; j--) {
				if (grid[i][j] == 0)
					continue;
				for (int ptr = j + 1; ptr <= 4; ptr++) {
					if (grid[i][ptr] and (grid[i][ptr] != grid[i][j])) {
						swap(grid[i][j], grid[i][ptr - 1]);
						break;
					}
					else if (grid[i][ptr] and (grid[i][ptr] == grid[i][j]) and vis[i][ptr] == 0) {
						grid[i][ptr] += grid[i][j];
						grid[i][j] = 0;
						vis[i][ptr] = 1;
						break;
					}
					else if (grid[i][ptr] and (grid[i][ptr] == grid[i][j]) and vis[i][ptr] == 1) {
						swap(grid[i][j], grid[i][ptr - 1]);
						break;
					}

					else if (ptr == 4 and grid[i][ptr] == 0)
						swap(grid[i][j], grid[i][ptr]);
				}
			}
		}
	}

	if (dir == 3) {
		for (int j = 1; j <= 4; j++) {
			for (int i = 4; i >= 1; i--) {
				if (grid[i][j] == 0)
					continue;
				for (int ptr = i + 1; ptr <= 4; ptr++) {
					if (grid[ptr][j] and (grid[ptr][j] != grid[i][j])) {
						swap(grid[i][j], grid[ptr - 1][j]);
						break;
					}
					else if (grid[ptr][j] and (grid[ptr][j] == grid[i][j]) and vis[ptr][j] == 0) {
						grid[ptr][j] += grid[i][j];
						grid[i][j] = 0;
						vis[ptr][j] = 1;
						break;
					}
					else if (grid[ptr][j] and (grid[ptr][j] == grid[i][j]) and vis[ptr][j] == 1) {
						swap(grid[i][j], grid[ptr - 1][j]);
						break;
					}

					else if (ptr == 4 and grid[ptr][j] == 0)
						swap(grid[i][j], grid[ptr][j]);
				}
			}
		}
	}

	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 4; j++)
			cout << grid[i][j] << " \n"[j == 4];
	}
}

int main() {
	fastIO();

	// solve();

	int tc, t = 1; // cin>>t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}