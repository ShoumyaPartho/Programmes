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
	ll n, q, k, x, lo, hi, mid, ans; cin >> n >> q;
	ll preSums[n + 1] = {0}, nums[n + 1] = {0};
	cin >> nums[1]; preSums[1] = nums[1];

	for (int i = 2; i <= n; i++) {
		cin >> x;
		nums[i] = max(nums[i - 1], x);
		preSums[i] = preSums[i - 1] + x;
	}

	while (q--) {
		cin >> x;

		lo = 1, hi = n, ans = -1;

		while (lo <= hi) {
			mid = (lo + hi) >> 1;

			if (nums[mid] <= x) {
				ans = mid;
				lo = mid + 1;
			}

			else
				hi = mid - 1;
		}

		cout << (ans == -1 ? 0 : preSums[ans]) << " \n"[q == 0];
	}
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