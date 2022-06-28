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
	int n, one = 0, flag = 1; cin >> n;
	vector<int> nums(n + 1, 0);

	for (int i = 1; i <= n; i++) {
		cin >> nums[i];

		if (nums[i] == 1)
			one++;
	}

	if (one == n or one == 0)
		cout << "YES" << endl;

	else {
		sort(nums.begin() + 1, nums.end());

		for (int i = n; i > 1; i--) {
			if (nums[i] - nums[i - 1] == 1) {
				flag = 0;
				break;
			}
		}

		cout << (flag ? "YES" : "NO") << endl;
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