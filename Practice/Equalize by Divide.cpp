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
	int n, mx, mn; cin >> n;
	int nums[n + 1] = {0};
	vector<pair<int, int> > track;

	for (int i = 1; i <= n; i++)
		cin >> nums[i];

	while (1) {
		mx = max_element(nums + 1, nums + 1 + n) - nums;
		mn = min_element(nums + 1, nums + 1 + n) - nums;

		if (nums[mn] == nums[mx])
			break;

		if (nums[mn] == 1) {
			cout << -1 << endl;
			return;
		}

		nums[mx] = (nums[mx] + nums[mn] - 1) / nums[mn];
		track.push_back({mx, mn});
	}

	cout << (int)track.size() << endl;

	for (int i = 0; i < (int)track.size(); i++)
		cout << track[i].first << " " << track[i].second << endl;
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