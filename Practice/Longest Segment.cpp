// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<cmath>
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

double getDis(pair<int, int> &a, pair<int, int> &b) {
	int t1, t2;

	t1 = a.first - b.first; t1 *= t1;
	t2 = a.second - b.second; t2 *= t2;

	return ((double)sqrt((double)t1 + t2));

}

void solve() {
	ll n; cin >> n;
	vector<pair<int, int> > points(n + 1, {0, 0});
	double ans = 0.0;

	for (int i = 1; i <= n; i++)
		cin >> points[i].first >> points[i].second;

	for (int i = 1; i < n; i++) {
		for (int j = i + 1; j <= n; j++)
			ans = max(ans, getDis(points[i], points[j]));
	}

	cout << setprecision(7) << fixed << ans << endl;
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