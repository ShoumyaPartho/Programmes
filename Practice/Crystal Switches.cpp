// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
#define INF 1e9

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int n, m, k, u, v, c, ans; cin >> n >> m >> k;
	vector<vector<pair<int, int> > > g(2 * n + 5);
	vector<int> dis(2 * n + 5, INF); dis[1] = 0;
	deque<int> deq; deq.push_front(1);

	for (int i = 1; i <= n; i++) {
		cin >> u >> v >> c;

		if (c)
			g[u].push_back({v, 1}), g[v].push_back({u, 1});

		else
			g[n + u].push_back({n + v, 1}), g[n + v].push_back({n + u, 1});
	}

	for (int i = 1; i <= k; i++) {
		cin >> u;
		g[u].push_back({n + u, 0});
		g[n + u].push_back({u, 0});
	}

	while (deq.size()) {
		u = deq.front(); deq.pop_front();

		for (auto it : g[u]) {
			v = it.first;
			c = it.second;

			if (dis[u] + c < dis[v]) {
				dis[v] = dis[u] + c;

				if (c)
					deq.push_back(v);

				else
					deq.push_front(v);
			}
		}
	}

	ans = min(dis[n], dis[2 * n]);
	ans = (ans == INF ? -1 : ans);

	cout << ans << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}