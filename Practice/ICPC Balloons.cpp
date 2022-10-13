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
	int n, cnt = 0; cin >> n;
	int nums[30] = {0}; string s;
	cin >> s;

	for (int i = 0; i < n; i++) {
		if (nums[s[i] - 'A'] == 0) {
			cnt += 2;
			nums[s[i] - 'A']++;
		}

		else
			cnt++;
	}

	cout << cnt << endl;
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