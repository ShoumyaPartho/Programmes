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
	int n, cur_or = 0, maxi, idx ;  cin >> n;
	vector<int> nums(n + 1, 0), vis(n + 1, 0);

	for (int i = 1; i <= n; i++)
		cin >> nums[i];

	for (int i = 1; i <= 31; i++) {
		maxi = 0, idx = 0;

		for (int j = 1; j <= n; j++) {
			if (vis[j])
				continue;

			if ((cur_or | nums[j]) > maxi) {
				maxi = cur_or | nums[j];
				idx = j;
			}
		}

		if (idx) {
			vis[idx]++;
			cout << nums[idx] << " ";
			cur_or |= nums[idx];
		}
	}

	for (int i = 1; i <= n; i++) {
		if (not vis[i])
			cout << nums[i] << " ";
	}

	cout << "\n";
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