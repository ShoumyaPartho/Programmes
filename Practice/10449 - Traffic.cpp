#include<iostream>
#include<ctime>
#include<cstdio>
using namespace std;

#define endl "\n"
#define ll long long int
const int MAX = 1e9 + 7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

class EDGE {
public:
	int source = 0, destination = 0, cost = 0;
};

void bellmanFord(int n, int r, EDGE *roads, ll *money) {

	money[1] = 0;

	for (int step = 1; step < n; step++) {
		bool check = false;
		for (int j = 1; j <= r; j++) {

			if ((money[roads[j].source] != MAX) and (money[roads[j].source] + roads[j].cost < money[roads[j].destination]))

				check = true, money[roads[j].destination] = money[roads[j].source] + roads[j].cost;
		}
		if (not check) break;
	}

	for (int j = 1; j <= r; j++) {

		if ((money[roads[j].source] != MAX) and (money[roads[j].source] + roads[j].cost < money[roads[j].destination]))

			money[roads[j].destination] = -MAX;
	}
}

void solve() {
	int n, r, q, x, temp, tc = 0;
	while (scanf("%d", &n) == 1) {

		int busy[n + 1]; ll money[n + 1];

		for (int i = 1; i <= n; i++) money[i] = MAX;

		for (ll i = 1; i <= n; i++)
			scanf("%d", &busy[i]);

		scanf("%d", &r);

		EDGE roads[r + 1];

		for (ll i = 1; i <= r; i++) {

			scanf("%d %d", &roads[i].source, &roads[i].destination);

			temp = busy[roads[i].destination] - busy[roads[i].source];

			roads[i].cost = temp * temp * temp;
		}

		// Here the roads and junctions form a directed weighted graph.
		// We need to find shortest/cheapest path from source (node no. 1) to a node.
		// But weight can be negative, hence, existence of negative cycle in graph is possible.
		// We can use Bellman-Ford algorithm to solve this issue.

		bellmanFord(n, r, roads, money);

		scanf("%d", &q);

		printf("Set #%d\n", ++tc);

		for (int i = 1; i <= q; i++) {

			scanf("%d", &x);

			if ((money[x] < 3ll) or (money[x] == MAX)) printf("?\n");

			else printf("%lld\n", money[x]);
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