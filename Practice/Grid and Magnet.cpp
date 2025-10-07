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

int dirx[] = {0, 1, 0, -1, 0};
int diry[] = {0, 0, 1, 0, -1};

bool isVal(vector<vector<bool> > &vis, int row, int col, int h, int w) {
	if (row<1 or col<1 or row>h or col>w)
		return false;

	if (vis[row][col])
		return false;

	return true;
}

void bfs(vector<vector<int> > &grid, vector<vector<bool> > &vis, int row, int col, int h, int w , int &ans) {
	if (grid[row][col] == -1)
		return;

	queue<pair<int, int> > q;

	q.push({row, col});
	vis[row][col] = true;

	int cnt = 0, flag = 0;

	while (!q.empty()) {

		pair<int, int> cell = q.front();
		int x = cell.first;
		int y = cell.second;
		cnt++; flag = 0;
		ans = max(ans, cnt);

		for (int i = 0; i < 4; i++) {

			int adjx = x + dirx[i];
			int adjy = y + diry[i];

			if ( (isVal(vis, adjx, adjy, h, w)) and (grid[adjx][adjy] == -1)) {
				ans = max(ans, cnt);
				flag = 1;
				break;
			}
		}

		if (flag) {
			flag = 0;
			q.pop();
			continue;
		}

		q.pop();

		// Go to the adjacent cells
		for (int i = 0; i < 4; i++) {

			int adjx = x + dirx[i];
			int adjy = y + diry[i];

			if (isVal(vis, adjx, adjy, h, w)) {
				q.push({ adjx, adjy });
				vis[adjx][adjy] = true;
			}
		}
	}
}

void solve() {
	int h, w, cnt = 0, ans = 0, tx, ty; cin >> h >> w;
	vector<vector<int> > grid(h + 1, vector<int> (w + 1, 1));
	vector<vector<bool> > vis(h + 1, vector<bool> (w + 1, false));

	for (int i = 1; i <= h; i++) {
		string s; cin >> s;

		for (int j = 0; j < w; j++) {
			if (s[j] == '#')
				grid[i][j + 1] = -1;
		}
	}

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			if (not vis[i][j])
				bfs(grid, vis, 1, 1 , h, w, ans);
		}
	}

	cout << ans << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}