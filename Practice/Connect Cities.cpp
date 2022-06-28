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

void dfs(vector<vector<int> > &graph, vector<int> &vis, int n, int m, int x, int &cc) {
	vis[x] = 1;

	for (auto i : graph[x]) {
		if (not vis[i])
			dfs(graph, vis, n, m, i, cc);
	}
}

void solve() {
	int n, m, a, b, cc = 0; cin >> n >> m;
	vector<vector<int> > graph(n + 1);
	vector<int> vis(n + 1, 0);

	for (int i = 1; i <= m; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		if (not vis[i]) {
			cc++;
			dfs(graph, vis, n, m, i, cc);
		}
	}

	cout << cc - 1 << endl;
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