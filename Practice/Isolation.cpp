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
	int n, q, t, u, v, ans; cin >> n >> q; ans = n;
	int deg[n + 1] = {0};
	vector<set<int> > lst(n + 1);

	while (q--) {
		cin >> t;

		if (t == 1) {
			cin >> u >> v;

			if (deg[u] == 0)
				ans--;

			if (deg[v] == 0)
				ans--;

			deg[u]++; deg[v]++;

			lst[u].insert(v);
			lst[v].insert(u);
		}

		if (t == 2) {
			cin >> u;

			if (deg[u])
				deg[u] = 0, ans++;

			for (auto x : lst[u]) {
				deg[x]--;

				if (deg[x] == 0)
					ans++;

				lst[x].erase(u);
			}

			lst[u].clear();
		}

		cout << ans << endl;
	}
}

int main() {
	fastIO();

	solve();

	return 0;
}