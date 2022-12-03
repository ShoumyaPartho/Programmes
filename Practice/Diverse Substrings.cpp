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
	int n, ans = 0; cin >> n;
	string s; cin >> s;

	for (int i = 0; i < n; i++) {
		int nums[10] = {0}, cntNums = 0, prevBest = 0;

		for (int j = i; j < (i + 100) and j < n; j++) {
			if (not nums[s[j] - '0'])
				cntNums++;

			nums[s[j] - '0']++;

			if (nums[s[j] - '0'] <= cntNums and prevBest <= cntNums)
				ans++;

			prevBest = max(prevBest, (nums[s[j] - '0']));
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