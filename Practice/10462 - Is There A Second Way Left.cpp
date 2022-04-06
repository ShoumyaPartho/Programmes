#include<iostream>
#include<ctime>
#include<algorithm>
#include<cstring>
#include<vector>
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

int parent[110], takenEdgeCnt, takenEdge[300];;

void resetParent(int n) {
	for (int i = 1; i <= n; i++) parent[i] = i;
}

int findParent(int i) {
	if (parent[i] == i) return i;
	return findParent(parent[i]);
}

class EDGE {
public:
	int source, destination, cost;
};

bool comparator(EDGE &e1, EDGE &e2) {
	return e1.cost < e2.cost;
}

vector<EDGE> edges;

int kruskalMST(int node) {
	auto it = edges.begin(); it++;
	sort(it, edges.end(), comparator);
	resetParent(node);
	int sum = 0; takenEdgeCnt = 0;

	for (int i = 1; i < (int) edges.size(); i++) {
		int parSrc = findParent(edges[i].source);
		int parDest = findParent(edges[i].destination);

		if (parSrc != parDest) { // This ensures both nodes are from different groups/sets
			parent[parSrc] = parDest;
			takenEdge[++takenEdgeCnt] = i;
			sum += edges[i].cost;
			if (takenEdgeCnt == (node - 1)) break;
		}
	}

	return (takenEdgeCnt == (node - 1) ? sum : -1);
}

void solve() {
	int t, tc, v, e, res1st, resTemp, tempCnt, ans; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cin >> v >> e;
		edges.clear();
		EDGE temp;
		temp.source = temp.destination = temp.cost = -1;
		edges.push_back(temp); // Putting a dummy variable to use 1-based indexing

		for (int i = 1; i <= e; i++) {
			EDGE data;
			cin >> data.source >> data.destination >> data.cost;
			edges.push_back(data);
		}

		memset(takenEdge, 0, sizeof (takenEdge));
		res1st = kruskalMST(v), ans = MAX;
		cout << "Case #" << tc << " : ";
		if (res1st == -1) cout << "No way" << endl; // Even 1st MST is not possible since graph disconnected
		else {

			for (int j = 1; j <= takenEdgeCnt; j++) {
				resetParent(v);
				tempCnt = resTemp = 0;

				for (int i = 1; i < (int) edges.size(); i++) {
					if (takenEdge[j] != i) {
						int strt = findParent(edges[i].source);
						int end  = findParent(edges[i].destination);

						if (strt != end) {
							parent[strt] = end;
							tempCnt++;
							resTemp += edges[i].cost;
							if (tempCnt == (v - 1)) break;
						}
					}
				}
				if (tempCnt == (v - 1)) ans = min(ans, resTemp);
			}
			if (ans == MAX)
				cout << "No second way\n";
			else
				cout << ans << endl;
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
