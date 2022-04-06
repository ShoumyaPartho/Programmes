// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
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
	ll n, m, u, v, res = 0, r; cin >> n >> m;

	vector<vector<ll> > adjLst(n + 1);
	vector<vector<bool> > graph(n + 1, vector<bool> (n + 1, false));

	for (int i = 1; i <= m; i++) {
		cin >> u >> v;

		adjLst[u].push_back(v);
		graph[u][v] = true;
	}

	for (int i = 1; i <= n; i++) { // Candidates for a
		for (int j = 1; j <= n; j++) { // Candidates for c
			r = 0;

			for (int k = 0; k < adjLst[i].size(); k++) {
				if (i != j and adjLst[i][k] != i and adjLst[i][k] != j and (graph[adjLst[i][k]][j]))
					r++;
			}

			res += (r * (r - 1) / 2);
		}
	}

	cout << res << endl;
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}