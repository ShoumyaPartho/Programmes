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
	int n, k, totDam = 0, flag = 0; cin >> n >> k;
	pair<int, int> nums[n + 1];

	for (int i = 1; i <= n; i++)
		cin >> nums[i].second;
	for (int i = 1; i <= n; i++)
		cin >> nums[i].first;

	sort(nums + 1, nums + 1 + n);

	for (int i = 1; i <= n and k >= 0;) {
		totDam += k;

		while (i <= n and nums[i].second <= totDam)
			i++;

		if (i == n + 1)
			flag = 1;

		else
			k -= nums[i].first;
	}

	cout << (flag ? "YES" : "NO") << endl;
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