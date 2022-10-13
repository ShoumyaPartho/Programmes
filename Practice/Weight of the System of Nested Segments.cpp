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

class Point {
public:
	int x, w, idx;
};

bool cmp1(Point &a, Point &b) {
	return a.x < b.x;
}

bool cmp2(Point &a, Point &b) {
	return a.w < b.w;
}

void solve() {
	int n, m, sum = 0; cin >> n >> m;
	vector<Point> points(m + 1);

	for (int i = 1; i <= m; i++) {
		cin >> points[i].x >> points[i].w;
		points[i].idx = i;
	}

	sort(points.begin() + 1, points.end(), cmp2);
	sort(points.begin() + 1, points.begin() + 2 * n + 1, cmp1);

	for (int i = 1; i <= n + n; i++)
		sum += points[i].w;

	cout << sum << endl;

	for (int i = 1, j = 2 * n; i < j; i++, j--)
		cout << points[i].idx << " " << points[j].idx << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}