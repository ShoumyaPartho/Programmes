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

bool dfs(ll*vis, ll node, ll tc, vector<vector<ll> > &graph) {
	vis[node] = 1;
	if (node == tc)
		return true;

	for (auto i : graph[node]) {
		if (not vis[i]) {
			if (dfs(vis, i, tc, graph))
				return true;
		}
	}

	return false;
}

void solve() {
	ll n, sx, sy, tx, ty, sc, tc, d; cin >> n >> sx >> sy >> tx >> ty;
	ll x[n + 1], y[n + 1], r[n + 1], vis[n + 1] = {0};
	vector<vector<ll> > graph(n + 1);

	for (int i = 1; i <= n; i++)
		cin >> x[i] >> y[i] >> r[i];

	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			d = ((x[i] - x[j]) * (x[i] - x[j])) + ((y[i] - y[j]) * (y[i] - y[j]));

			if ((d > ((r[i] + r[j]) * (r[i] + r[j]))) or (d < ((r[i] - r[j]) * (r[i] - r[j]))))
				continue;

			graph[i].push_back(j);
			graph[j].push_back(i);
		}
	}

	for (int i = 1; i <= n; i++) {
		if (((x[i] - sx) * (x[i] - sx) + (y[i] - sy) * (y[i] - sy)) == (r[i]*r[i]))
			sc = i;

		if (((x[i] - tx) * (x[i] - tx) + (y[i] - ty) * (y[i] - ty)) == (r[i]*r[i]))
			tc = i;
	}

	cout << (dfs(vis, sc, tc, graph) ? "Yes" : "No") << endl;
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