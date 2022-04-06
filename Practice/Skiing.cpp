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
const ll INF = 1e9 + 7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	ll n, m, u, v, d, node, ans = 0, to, cost; cin >> n >> m;
	vector<ll> heights(n + 1, 0), dis(n + 1, INF);
	vector<vector<pair<ll, ll> > > list(n + 1);

	for (int i = 1; i <= n; i++)
		cin >> heights[i];

	for (int i = 1; i <= m; i++) {
		cin >> u >> v;

		if (heights[u] > heights[v])
			swap(u, v);

		list[u].push_back({v, heights[v] - heights[u]});
		list[v].push_back({u, 0});
	}


	// Starting Dijkstra algorithm
	priority_queue<pair<ll, ll>, vector<pair<ll, ll> >, greater<pair<ll, ll> > > q;
	dis[1] = 0; q.push({dis[1], 1});

	while (not q.empty()) {
		tie(d, node) = q.top(); q.pop();

		if (dis[node] < d)
			continue;

		for (auto &i : list[node]) {
			to = i.first, cost = i.second;
			if (dis[to] > (dis[node] + cost)) {
				dis[to] = dis[node] + cost;
				q.push({dis[to], to});
			}
		}
	}

	for (int i = 2; i <= n; i++)
		ans = max(ans, heights[1] - heights[i] - dis[i]);

	cout << ans << endl;
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