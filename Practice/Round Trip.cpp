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

int dirX[] = {0, 1, 0, -1, 0};
int dirY[] = {0, 0, 1, 0, -1};

void dfs(int sx, int sy, int i, int j, int h, int w,
         vector<vector<char> > &grid,
         vector<vector<int> > &cnt,
         vector<vector<bool> > &vis,
         int &flag, int dif) {

	vis[i][j] = true;
	cnt[i][j] = dif;

	// cout << i << " " << j << endl;

	for (int x = 1; x <= 4; x++) {
		int tx = i + dirX[x];
		int ty = j + dirY[x];

		if (tx < 1 or ty<1 or tx>h or ty>w or grid[tx][ty] == '#')
			continue;

		else if (tx == sx and ty == sy and ((abs(cnt[sx][sy] - cnt[i][j]) + 1) >= 4)) {
			flag = 1;
			return;
		}

		if (vis[tx][ty])
			continue;

		dfs(sx, sy, tx, ty, h, w, grid, cnt, vis, flag, dif + 1);

		if (flag)
			return;
	}
}

void solve() {
	int h, w, flag = 0, sx, sy; cin >> h >> w;
	vector<vector<char> > grid(h + 1, vector<char> (w + 1));
	vector<vector<int> > cnt(h + 1, vector<int> (w + 1, 0));
	vector<vector<bool> > vis(h + 1, vector<bool> (w + 1, false));
	string s;

	for (int i = 1; i <= h; i++) {
		cin >> s;

		for (int j = 0; j < w; j++) {
			grid[i][j + 1] = s[j];

			if (grid[i][j + 1] == 'S')
				sx = i, sy = j + 1;
		}
	}

	dfs(sx, sy, sx, sy, h, w, grid, cnt, vis, flag, 0);

	cout << (flag ? "Yes" : "No") << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}