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
	int k, n, cnt = 0, ans = k; cin >> n >> k;
	int nums[n + 1] = {0};
	string s; cin >> s;

	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			if (i == 0)
				nums[i + 1] = ++cnt;

			else if (s[i - 1] == '0')
				nums[i + 1] = cnt;

			else
				nums[i + 1] = ++cnt;
		}

		else {
			if (i == 0)
				nums[i + 1] = cnt;

			else if (s[i - 1] == '1')
				nums[i + 1] = cnt;

			else
				nums[i + 1] = ++cnt;
		}

		if (i + 1 - k >= 0 and (nums[i + 1] - nums[i + 1 - k] == 1)) {
			if (s[i] == '0')
				ans = min(ans, 1);
			else
				ans = 0;
		}
	}

	for (int i = k; i <= n; i++)
		ans = min(ans, nums[i] - nums[i - k]);

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