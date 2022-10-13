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
	string s, ts1, ts2;
	map<string, int> mp;
	int ans[n + 1] = {0};
	vector<string> strs(n + 1);

	for (int i = 1; i <= n; i++) {
		cin >> strs[i];
		mp[strs[i]]++;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < strs[i].size(); j++) {
			ts1 = strs[i].substr(0, j);
			ts2 = strs[i].substr(j, strs[i].size() - j);

			if (mp.count(ts1) and mp.count(ts2))
				ans[i] = 1;
		}
	}

	for (int i = 1; i <= n; i++)
		cout << ans[i];
	cout << endl;
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