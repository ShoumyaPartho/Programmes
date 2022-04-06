// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const int MAX = 1e9;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void dfs(vector<vector<pair<int, int> > > &graph, int u, int ans, vector<bool> &visited) {
	visited[u] = true;

	for (int i = 1; i < graph[u].size(); i++) {
		int v = graph[u][i].first, w = graph[u][i].second;

		if ((not visited[v]) and (ans | w) == ans)
			dfs(graph, v, ans, visited);
	}
}

void findAns(vector<vector<pair<int, int> > > &graph, int n, int &ans, int bitCnt) {
	if (bitCnt < 0)
		return;

	int temp = (int) 1 << bitCnt; ans -= temp;

	vector<bool> visited(n + 1, false);
	dfs(graph, 1, ans, visited);

	for (int i = 1; i <= n; i++) {
		if (not visited[i]) {
			ans += temp;
			break;
		}
	}

	findAns(graph, n, ans, bitCnt - 1);
}

void solve() {
	int tc, n, m, u, v, w, bitCnt, ans; cin >> tc;

	while (tc--) {
		cin >> n >> m;

		vector<vector<pair<int, int> > > graph(n + 1, vector<pair<int, int> > (1));

		for (int i = 1; i <= m; i++) {
			cin >> u >> v >> w;

			graph[u].push_back({v, w});
			graph[v].push_back({u, w});
		}

		for (ans = 1, bitCnt = 0; ans <= MAX; bitCnt++)
			ans = (ans << 1) | 1;

		findAns(graph, n, ans, bitCnt);

		cout << ans << endl;
	}
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