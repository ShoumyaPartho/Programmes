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
	ll n, ans = 0; cin >> n;
	vector<int> nums(n + 1, 0), tracks(3 * 1e5 + 10, 0);

	for (int i = 1; i <= n; i++) {
		cin >> nums[i];
		if (nums[i] < i)
			tracks[i]++;
	}

	for (int i = 1; i <= n; i++)
		tracks[i] += tracks[i - 1];

	for (int i = 1; i <= n; i++) {
		if (nums[i] < i) {
			if (nums[i] == 0)
				continue;

			ans += tracks[nums[i] - 1];
		}
	}

	cout << ans << endl;
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