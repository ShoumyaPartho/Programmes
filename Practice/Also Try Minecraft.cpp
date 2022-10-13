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
	ll n, m, l, r; cin >> n >> m;
	vector<ll> nums(n + 1, 0), pre(n + 5, 0), post(n + 5, 0);

	for (int i = 1; i <= n; i++)
		cin >> nums[i];

	for (int i = 2; i <= n; i++) {
		if (nums[i - 1] >= nums[i])
			pre[i] = nums[i - 1] - nums[i];
	}

	for (int i = 2; i <= n; i++)
		pre[i] += pre[i - 1];

	for (int i = n - 1; i >= 1; i--) {
		if (nums[i] <= nums[i + 1])
			post[i] = nums[i + 1] - nums[i];
	}

	for (int i = n - 1; i >= 1; i--)
		post[i] += post[i + 1];

	while (m--) {
		cin >> l >> r;

		if (l <= r)
			cout << pre[r] - pre[l] << endl;
		else
			cout << post[r] - post[l] << endl;
	}
}

int main() {
	fastIO();

	// solve();

	int tc, t = 1; // cin>>t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}