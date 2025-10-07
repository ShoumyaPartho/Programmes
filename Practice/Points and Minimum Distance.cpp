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

void solve() {
	int n, ans = 0; cin >> n;
	int nums[2 * n + 5] = {0};
	vector<pair<int, int> > points;

	for (int i = 1; i <= 2 * n; i++)
		cin >> nums[i];

	sort(nums + 1, nums + 1 + 2 * n);

	for (int i = 1; i <= n; i++)
		points.push_back({nums[i], nums[2 * n - i + 1]});

	for (int i = 1; i < n; i++)
		ans += (abs(points[i].first - points[i - 1].first) + abs(points[i].second - points[i - 1].second));

	cout << ans << endl;

	for (int i = 0; i < n; i++)
		cout << points[i].first << " " << points[i].second << endl;
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