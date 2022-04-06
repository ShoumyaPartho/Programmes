#include<iostream>
#include<ctime>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;

#define endl "\n"
#define ll long long int

const ll SIZE = 5005 , MAX = 10000000;

class NODE {
public:
	int n, cost;
	NODE() {}

	NODE(int node, int Cost) {
		n = node;
		cost = Cost;
	}

	bool operator < (const NODE &node) const {
		return cost > node.cost;
	}
};

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

vector<NODE> adjLst[SIZE];
bool visited[SIZE], backTrack[SIZE];
int shortest[SIZE], sec_shortest[SIZE], minCost[SIZE];

int find_second_shortest(int start, int end) {

	priority_queue<NODE> q; NODE node, temp; int n = end;

	q.push(NODE(start, 0));

	memset(visited, false, sizeof(visited));
	memset(backTrack, false, sizeof(backTrack));
	memset(shortest, -1, sizeof(shortest));
	memset(sec_shortest, -1, sizeof(sec_shortest));

	shortest[start] = 0;

	for (int i = 1; i <= n; i++) {
		minCost[i] = MAX;

		for (int j = 0; j < adjLst[i].size(); j++)
			minCost[i] = min(minCost[i], 2 * adjLst[i][j].cost);
	}

	while (not q.empty()) {
		node = q.top(); q.pop();

		if (visited[node.n]) {
			if (shortest[node.n] < node.cost and (sec_shortest[node.n] == -1 or sec_shortest[node.n] >= node.cost))
				sec_shortest[node.n] = node.cost;
			else
				continue;
		}

		else visited[node.n] = true;

		for (int i = 0; i < adjLst[node.n].size(); i++) {

			temp = adjLst[node.n][i];

			if (shortest[temp.n] == -1 or (shortest[temp.n] > (node.cost + temp.cost))) {

				q.push(NODE(temp.n, node.cost + temp.cost));
				sec_shortest[temp.n] = shortest[temp.n];
				shortest[temp.n] = node.cost + temp.cost;
			}

			else if (sec_shortest[temp.n] == -1 or (sec_shortest[temp.n] > node.cost + temp.cost)) {
				if (shortest[temp.n] != (node.cost + temp.cost))
					q.push(NODE(temp.n, node.cost + temp.cost));
			}
		}

		if (not backTrack[node.n]) {
			q.push(NODE(node.n, shortest[node.n] + minCost[node.n]));
			backTrack[node.n] = true;
		}
	}
	return sec_shortest[end];
}

void solve() {
	int t, tc = 1, n, r, x, y, c;
	cin >> t;

	while (tc <= t) {
		cin >> n >> r;

		for (int i = 1; i <= n; i++)
			adjLst[i].clear();

		for (int i = 1; i <= r; i++) {
			cin >> x >> y >> c;

			adjLst[x].push_back(NODE(y, c));
			adjLst[y].push_back(NODE(x, c));
		}

		int ans = find_second_shortest(1, n);

		cout << "Case " << tc++ << ": " << ans << endl;
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