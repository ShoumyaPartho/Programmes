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

vector<int> segTree;

void build(vector<int> &ara, int n, int node, int b, int e) {
	if (b > e)
		return;

	if (b == e) {
		segTree[node] = ara[b];
		return;
	}

	int mid = (b + e) >> 1;

	build(ara, n, node * 2, b, mid);
	build(ara, n, node * 2 + 1, mid + 1, e);

	segTree[node] = segTree[node * 2] + segTree[node * 2 + 1];
}

void update(int node, int l, int r, int idx, int type, int v) {
	if (l > r)
		return;

	if (l == r and l == idx) {
		if (type == 1) {
			cout << segTree[node] << endl;
			segTree[node] = 0;
		}

		if (type == 2)
			segTree[node] += v;

		return;
	}

	int mid = (l + r) >> 1;

	if (idx <= mid)
		update(node * 2, l, mid, idx, type, v);

	if (idx > mid)
		update(node * 2 + 1, mid + 1, r, idx, type, v);

	segTree[node] = segTree[node * 2] + segTree[node * 2 + 1];
}

int query(int node, int b, int e, int l , int r) {
	if ((b > e) or (e < l) or (b > r))
		return 0;

	if (l <= b and r >= e)
		return segTree[node];

	int t1 = 0, t2 = 0, mid = (b + e) >> 1;

	if (l <= mid)
		t1 = query(node * 2, b, mid, l, r);

	if (r > mid)
		t2 = query(node * 2 + 1, mid + 1, e, l, r);

	return t1 + t2;
}

void solve() {
	int tc, n, q, v, type, idx, j; cin >> tc;

	for (int t = 1; t <= tc; t++) {
		cout << "Case " << t << ": " << endl;

		cin >> n >> q;
		vector<int> ara(n + 1, 0);
		segTree.assign(3 * n, 0);

		for (int i = 1; i <= n; i++)
			cin >> ara[i];

		build(ara, n, 1, 1, n);

		while (q--) {
			cin >> type >> idx;

			if (type == 1)
				update(1, 1, n, idx + 1, 1, 0);

			if (type == 2) {
				cin >> v;
				update(1, 1, n, idx + 1, 2, v);
			}

			if (type == 3) {
				cin >> j;
				cout << query(1, 1, n, idx + 1, j + 1) << endl;
			}
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