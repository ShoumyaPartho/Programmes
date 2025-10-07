#include<iostream>
#include<climits>
using namespace std;
#define ll long long int
#define el "\n"

int mat[15][15];

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void calc(int n, int cur, int mask, int cost, int &minCost, int nodesLeft) {
	if (nodesLeft == 0) {
		minCost = min(minCost, cost + mat[cur][0]);

		return;
	}

	for (int i = 1; i < n; i++) {
		if ((mask & (1 << i)) == 0) {
			mask = mask | (1 << i);
			calc(n, i, mask, cost + mat[cur][i], minCost, nodesLeft - 1);
			mask = mask & (~(1 << i));
		}
	}
}

int main() {
	fastIO();
	int t; cin >> t;


	while (t--) {
		int n, mask = 0; cin >> n;
		int minCost = INT_MAX;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
				cin >> mat[i][j];
		}

		mask = mask | (1 << 0);

		calc(n, 0, mask, 0, minCost, n - 1);

		cout << minCost << el;
	}
}