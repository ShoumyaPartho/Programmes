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

class EDGE {
public:
	int u, v, w, id = 0;
};

void resetParent(vector<int> &parent, int n) {
	for (int i = 1; i <= n; i++)
		parent[i] = i;
}

int findParent(vector<int> &parent, int n) {
	if (parent[n] == n)
		return n;

	return (parent[n] = findParent(parent, parent[n]));
}

bool cmprtr(EDGE &item1, EDGE &item2) {
	return item1.w < item2.w;
}

void solve() {
	int n, m, q, takenEdgeCnt = 0, len, parSrc, parDst; cin >> n >> m >> q;
	vector<EDGE> edges; EDGE e; edges.push_back(e);
	vector<int> parent(n + 1);
	vector<bool> ans(q + 1, false);

	resetParent(parent, n);

	for (int i = 1; i <= m; i++) {
		cin >> e.u >> e.v >> e.w;
		edges.push_back(e);
	}

	for (int i = 1; i <= q; i++) {
		cin >> e.u >> e.v >> e.w; e.id = i;
		edges.push_back(e);
	}

	sort(edges.begin() + 1, edges.end(), cmprtr); len = edges.size();

	for (int i = 1; i < len; i++) {
		parSrc = findParent(parent, edges[i].u);
		parDst = findParent(parent, edges[i].v);

		if ( parSrc != parDst ) {
			if (edges[i].id) {
				ans[edges[i].id] = true;
				continue;
			}

			parent[parSrc] = parDst;
			takenEdgeCnt++;

			if (takenEdgeCnt == (n - 1))
				break;
		}
	}

	for (int i = 1; i <= q; i++) {
		cout << (ans[i] ? "Yes" : "No") << endl;
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