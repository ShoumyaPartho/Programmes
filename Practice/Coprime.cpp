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
	int n, val, ans = 0; cin >> n;
	int nums[n + 1] = {0}, idxs[1010] = {0};
	vector<vector<int> > coprimes(1005);
	coprimes[1].push_back(1);

	for (int i = 1; i <= 1000; i++) {
		for (int j = i + 1; j <= 1000; j++) {
			if (__gcd(i, j) == 1) {
				coprimes[i].push_back(j);
				coprimes[j].push_back(i);
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		cin >> nums[i];
		idxs[nums[i]] = i;
	}

	for (int i = 1; i <= n; i++) {
		val = nums[i];

		for (auto j : coprimes[val]) {
			if (idxs[j])
				ans = max(ans, i + idxs[j]);
		}
	}

	cout << (ans == 0 ? -1 : ans) << endl;
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