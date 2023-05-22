// Solved by: Shoumya
// Motivation: https://atcoder.jp/contests/abc301/submissions/41624256

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
const int INF = 1e7 + 7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void bfs(int it, int h, int w, vector<vector<char> > &grid, vector<pair<int, int> > &points, vector<vector<int> > &dist) {
	vector<vector<int> > g(h, vector<int> (w, INF));
	int N = (int)points.size(), sx = points[it].first, sy = points[it].second;
	int dx[4] = {0, 1, 0, -1};
	int dy[4] = {1, 0, -1, 0};
	queue<pair<int, int> > q; q.push({sx, sy});

	g[sx][sy] = 0;

	while (not q.empty()) {
		pair<int, int> t = q.front(); q.pop();

		for (int i = 0; i < 4; i++) {
			int x = t.first + dx[i], y = t.second + dy[i];

			if (x >= 0 and x<h and y >= 0 and y < w and grid[x][y] != '#' and g[x][y] == INF) {
				g[x][y] = g[t.first][t.second] + 1;
				q.push({x, y});
			}
		}
	}

	for (int i = it; i < N; i++) {
		int x = points[i].first, y = points[i].second;
		dist[it][i] = dist[i][it] = g[x][y];
	}
}

void solve() {
	int h, w, t, N = 2, it = 0, ans = -1; cin >> h >> w >> t;
	vector<vector<char> > grid(h, vector<char> (w));
	vector<pair<int, int> > points;

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> grid[i][j];

			if (grid[i][j] == 'o')
				N++;
		}
	}

	points.resize(N);
	vector<vector<int> > dist(N, vector<int> (N));

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (grid[i][j] == 'S')
				points[N - 1] = {i, j};

			else if (grid[i][j] == 'G')
				points[N - 2] = {i, j};

			else if (grid[i][j] == 'o')
				points[it++] = {i, j};
		}
	}

	for (int i = 0; i < N; i++)
		bfs(i, h, w, grid, points, dist);

	vector<vector<int> > dp(1 << (N - 1), vector<int> (N, INF)); dp[0][N - 1] = 0;

	for (int mask = 0; mask < (1 << (N - 1)); mask++) {
		for (int v = 0; v < N; v++) {
			for (int x = 0; x < (N - 1); x++) {
				if (not (mask & (1 << x)))
					dp[mask | (1 << x)][x] = min(dp[mask | (1 << x)][x], dp[mask][v] + dist[v][x]);
			}
		}
	}

	for (int mask = 0; mask < (1 << (N - 1)); mask++) {
		if (dp[mask][N - 2] <= t)
			ans = max(ans, __builtin_popcount(mask) - 1);
	}

	cout << ans << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}