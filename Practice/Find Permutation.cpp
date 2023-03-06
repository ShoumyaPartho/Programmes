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

void solve() {
	int n, m, cnt = 0, x, y, v; cin >> n >> m;
	int inDeg[n + 1] = {0}, data[n + 1];
	vector<vector<int> > g(n + 1);
	queue<int> q;

	for (int i = 1; i <= m; i++) {
		cin >> x >> y;
		g[x].push_back(y);
		inDeg[y]++;
	}

	for (int i = 1; i <= n; i++) {
		if (not inDeg[i])
			q.push(i);
	}

	while (not q.empty()) {
		if (q.size() > 1) {
			cout << "No" << endl;
			return;
		}

		v = q.front();
		q.pop();

		for (auto p : g[v]) {
			inDeg[p]--;

			if (not inDeg[p])
				q.push(p);
		}

		data[v] = ++cnt;
	}

	cout << "Yes" << endl;

	for (int i = 1; i <= n; i++)
		cout << data[i] << " \n"[i == n];
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