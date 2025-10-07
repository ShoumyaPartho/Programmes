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
	int n; cin >> n;
	vector<int> nums;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			char c; cin >> c;
			if (c == '#')
				nums.push_back(j + 1);
		}
	}

	for (auto i = n - 1; i >= 0 ; i--)
		cout << nums[i] << " \n"[i == 0];
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		// cout << "Case " << tc << ": ";
		solve();
	}

	return 0;
}