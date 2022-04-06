// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<queue>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
#define	MAX 1e18

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

ll dirX[] = {0, 1, 0, -1, 0};
ll dirY[] = {0, 0, 1, 0, -1};

void bfs(ll sx, ll sy, ll n, ll m, vector <vector<ll> > &grid, vector <vector<ll> > &dis ) {

	queue<pair<ll, ll> > q;
	q.push({sx, sy});
	dis[sx][sy] = 1;

	while (not q.empty()) {

		ll x = q.front().first;
		ll y = q.front().second;

		q.pop();

		for (int i = 1; i <= 4; i++) {

			ll tx = x + dirX[i];
			ll ty = y + dirY[i];

			if (tx >= 1 and ty >= 1 and tx <= n and ty <= m and grid[tx][ty] != -1 and dis[tx][ty] == 0) {
				dis[tx][ty] = dis[x][y] + 1;
				q.push({tx, ty});
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			dis[i][j]--;
	}
}

void solve() {
	ll n, m, w, bestFinish = MAX, ans; cin >> n >> m >> w;
	vector <vector<ll> > grid(n + 1, vector<ll> (m + 1, 0)), dis1(n + 1, vector<ll> (m + 1, 0)), dis2(n + 1, vector<ll> (m + 1, 0));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			cin >> grid[i][j];
	}

	bfs(1, 1, n, m, grid, dis1);
	bfs(n, m, n, m, grid, dis2);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (grid[i][j] >= 1 and dis2[i][j] != -1)
				bestFinish = min(bestFinish, grid[i][j] + dis2[i][j] * w);
		}
	}

	ans = (dis1[n][m] == -1 ? MAX : dis1[n][m] * w);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (grid[i][j] >= 1 and dis1[i][j] != -1 and bestFinish != MAX)
				ans = min(ans, dis1[i][j] * w + grid[i][j] + bestFinish);
		}
	}

	cout << (ans == MAX ? -1 : ans) << endl;
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