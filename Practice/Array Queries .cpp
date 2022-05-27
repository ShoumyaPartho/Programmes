// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const int INF = 1e9;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

vector<int> segTree;

void build(int *ara, int n, int node, int l, int r) {

	if (l > r)
		return;

	if (l == r) {
		segTree[node] = ara[l];
		return;
	}

	int mid = (l + r) >> 1;

	build(ara, n, node * 2, l, mid);
	build(ara, n, node * 2 + 1, mid + 1, r);

	segTree[node] = min(segTree[node * 2], segTree[node * 2 + 1]);
}

int query(int node, int b, int e, int l, int r) {
	if ((b > e) or (e < l) or (r < b))
		return INF;

	if (l <= b and e <= r)
		return segTree[node];

	int t1 = INF, t2 = INF, mid = (b + e) >> 1;

	if (mid >= l)
		t1 = query(node * 2, b, mid, l, r);

	if (r > mid)
		t2 = query(node * 2 + 1, mid + 1, e, l, r);

	return min(t1, t2);
}

void solve() {
	int tc, t, n, q, l, r; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cout << "Case " << tc << ": " << endl;
		cin >> n >> q;
		int ara[n + 1] = {0};
		segTree.assign(3 * n, 0);

		for (int i = 1; i <= n; i++)
			cin >> ara[i];

		build(ara, n, 1, 1, n);

		while (q--) {
			cin >> l >> r;

			cout << query(1, 1, n, l, r) << endl;
		}
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