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

int dfs(int cur, int volt, vector<vector<int> > &ls, vector<int> &dp, vector<int> &cap, vector<bool> &vis, int n ) {
	if (dp[cur] != -1)
		return dp[cur];

	int cnt = 1;
	vis[cur] = true;

	for (auto i : ls[cur]) {
		if (cap[i] < volt and (not vis[i]))
			cnt += dfs(i, cap[i], ls, dp, cap, vis, n);
	}

	return (dp[cur] = cnt);
}

void solve() {
	int n, ans = 0, x, y; cin >> n;
	vector<int> cap(n + 1, 0);

	for (int i = 1; i <= n; i++)
		cin >> cap[i];

	vector<vector<int> > ls(n + 1);
	vector<int> dp(n + 1, -1);
	vector<bool> vis(n + 1, false);

	for (int i = 1; i < n; i++) {
		cin >> x >> y;

		ls[x].push_back(y);
		ls[y].push_back(x);
	}

	for (int i = 1; i <= n; i++) {
		fill(vis.begin(), vis.end(), false);
		ans = max(ans, dfs(i, cap[i], ls, dp, cap, vis, n));
	}

	cout << ans << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cout << "Case #" << tc << ": ";
		solve();
	}

	return 0;
}