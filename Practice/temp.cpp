// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
const int INF = 1e7;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void bfs(int i, int h, int w, int n, vector<vector<char> > &grid, vector<vector<int> > &dis, vector<pair<int, int> > &points) {
    vector<vector<int> > d(h, vector<int> (w, INF));
    int x = points[i].first, y = points[i].second, xx, yy;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    queue<pair<int, int> > q; q.push({x, y});
    d[x][y] = 0;

    while (not q.empty()) {
        xx = q.front().first, yy = q.front().second; q.pop();

        for (int i = 0; i < 4; i++) {
            x = xx + dx[i], y = yy + dy[i];

            if (x >= 0 and x<h and y >= 0 and y < w and grid[x][y] != '#' and d[x][y] == INF) {
                d[x][y] = d[xx][yy] + 1;
                q.push({x, y});
            }
        }
    }

    for (int j = i; j < n; j++)
        dis[i][j] = dis[j][i] = d[points[j].first][points[j].second];
}

void solve() {
    int h, w, t, n = 2, it = 1, ans = -1; cin >> h >> w >> t;
    vector<vector<char> > grid(h, vector<char> (w));
    vector<pair<int, int> > points;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> grid[i][j];

            if (grid[i][j] == 'o')
                n++;
        }
    }

    points.resize(n);
    vector<vector<int> > dis(n, vector<int> (n));
    vector<vector<int> > dp(1 << n, vector<int> (n, INF)); dp[1][0] = 0;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (grid[i][j] == 'S')
                points[0] = {i, j};

            if (grid[i][j] == 'G')
                points[n - 1] = {i, j};

            if (grid[i][j] == 'o')
                points[it++] = {i, j};
        }
    }

    for (int i = 0; i < n; i++)
        bfs(i, h, w, n, grid, dis, points);

    for (int mask = 1; mask < (1 << n); mask += 2) {
        for (int v = 0; v < n; v++) {
            for (int x = 1; x < n; x++) {
                if (not (mask & (1 << x)))
                    dp[mask | (1 << x)][x] = min(dp[mask | (1 << x)][x], dp[mask][v] + dis[v][x]);
            }
        }
    }

    for (int mask = 1; mask < (1 << n); mask += 2) {
        if (dp[mask][n - 1] <= t)
            ans = max(ans, __builtin_popcount(mask) - 2);
    }

    cout << ans << endl;
}

int main() {
    fastIO();

    solve();

    return 0;
}