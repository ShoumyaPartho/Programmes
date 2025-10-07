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

void dfs(int cur, int n, ll &cnt, vector<vector<int> > &lst, vector<bool> &visited) {
	visited[cur] = true;
	cnt++;

	for (auto it : lst[cur]) {
		if (not visited[it])
			dfs(it, n, cnt, lst, visited);
	}
}

void solve() {
	int n, m, x, y; cin >> n >> m;
	vector<vector<int> > lst(n + 1);
	vector<bool> visited(n + 1, false);
	ll ans = 0, cnt;

	for (int i = 1; i <= m; i++) {
		cin >> x >> y;
		lst[x].push_back(y);
		lst[y].push_back(x);
	}

	for (int i = 1; i <= n; i++) {
		if (not visited[i]) {
			cnt = 0;
			dfs(i, n, cnt, lst, visited);
			ans += ((cnt * (cnt - 1)) / 2);
		}
	}

	cout << ans - m << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}