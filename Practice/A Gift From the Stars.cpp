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

void dfs(int x, int f, int dep, int n, int *vis, vector<vector<int> > &g) {
	if (dep == 3) {
		vis[x] = 1;
		dep = 0;
	}

	for (auto i : g[x]) {
		if (i == f)
			continue;

		dfs(i, x, dep + 1, n, vis, g);
	}
}

void solve() {
	int n, x, y; cin >> n;
	int deg[n + 1] = {0}, vis[n + 1] = {0};
	vector<vector<int> > g(n + 1);
	vector<int> res;

	for (int i = 1; i < n; i++) {
		cin >> x >> y;

		deg[x]++, deg[y]++;

		g[x].push_back(y);
		g[y].push_back(x);
	}

	for (int i = 1; i <= n; i++) {
		if (deg[i] == 1) {
			vis[g[i][0]] = 1;
			dfs(g[i][0], -1, 0, n, vis, g);
			break;
		}
	}

	for (int i = 1; i <= n; i++) {
		if (vis[i] == 1)
			res.push_back(deg[i]);
	}

	sort(res.begin(), res.end());

	for (int i = 0; i < res.size(); i++)
		cout << res[i] << " \n"[i == res.size() - 1];
}

int main() {
	fastIO();

	solve();

	return 0;
}