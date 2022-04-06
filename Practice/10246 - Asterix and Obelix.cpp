#include<iostream>
#include<ctime>
#include<vector>
using namespace std;

#define endl "\n"
#define ll long long int
const ll MAX = 1e9 + 7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void floydAlgo(vector<vector<ll> > &cityCost, vector<vector<ll> > &pathCost, ll city) {

	for (ll k = 1; k <= city; k++) {

		for (ll i = 1; i <= city; i++) {

			for (ll j = 1; j <= city; j++) {

				ll tempCost = pathCost[i][k] + pathCost[k][j] + max(cityCost[i][k], cityCost[k][j]);

				if (tempCost < (pathCost[i][j] + cityCost[i][j])) {

					pathCost[i][j] = pathCost[i][k] + pathCost[k][j];

					cityCost[i][j] = max(cityCost[i][k], cityCost[k][j]);
				}
			}
		}
	}
}

void solve() {
	ll tc = 0, c, r, q, from, to, cost, tempCost;

	while (cin >> c >> r >> q, (c + r + q)) {

		vector<vector<ll> > cityCost(85, vector<ll> (85, MAX)), pathCost(85, vector<ll> (85, MAX));

		for (ll i = 1; i <= c; i++)
			cin >> cityCost[i][i];

		for (ll i = 1; i <= r; i++) {

			cin >> from >> to >> cost;

			pathCost[from][to] = pathCost[to][from] = cost;

			tempCost = max(cityCost[from][from], cityCost[to][to]);

			cityCost[from][to] = cityCost[to][from] = tempCost;
		}

		// Floyd Algo finds All Pair Shortest Path depending only on cost of path.
		// But here max node-value of a path has also been added. This serves two-dimensional purpose.
		// This extra constraint can be handled by running Floyd-Warshall Algorithm twice.

		floydAlgo(cityCost, pathCost, c); floydAlgo(cityCost, pathCost, c);

		if (tc) cout << endl;

		cout << "Case #" << ++tc << endl;

		for (ll i = 1; i <= q; i++) {

			cin >> from >> to;

			if (pathCost[from][to] == MAX) cout << "-1" << endl;

			else cout << cityCost[from][to] + pathCost[from][to] << endl;
		}
	}
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