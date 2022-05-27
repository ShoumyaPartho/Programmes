// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
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

int dfs(vector<vector<pair<int, int> > > &graph, vector<int> &subtrees, int node, int parent, bool blocked) {
	int noOfNodes = 1, x;

	for (auto it : graph[node]) {
		if (it.first == parent)
			continue;

		x = dfs(graph, subtrees, it.first, node, (it.second or blocked));
		noOfNodes += x;

		if ((not blocked) and it.second)
			subtrees.push_back(x);
	}

	return noOfNodes;
}

void solve() {
	int tc, n, k, u, v, x, cnt, flag, len; cin >> tc;

	while (tc--) {
		cin >> n >> k; cnt = n, flag = 0;
		vector<vector<pair<int, int> > > graph(n + 1);
		vector<int> subtrees;

		for (int i = 1; i < n; i++) {
			cin >> u >> v >> x;
			graph[u].push_back({v, x});
			graph[v].push_back({u, x});
		}

		dfs(graph, subtrees, 1, 0, false);

		sort(subtrees.begin(), subtrees.end(), greater<int>());
		len = subtrees.size();

		if (cnt <= k) {
			cout << 0 << endl;
			continue;
		}

		for (int i = 0; i < len; i++) {
			cnt -= subtrees[i];

			if (cnt <= k) {
				cout << i + 1 << endl;
				flag = 1;
				break;
			}
		}

		if (not flag)
			cout << -1 << endl;
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