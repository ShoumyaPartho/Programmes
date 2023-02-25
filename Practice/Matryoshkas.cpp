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
	int n, p, ans = 0, last = 0, cnt; cin >> n;
	map<int, int> mp;
	set<int> st;

	for (int i = 1; i <= n; i++) {
		cin >> p;
		mp[p]++;
		st.insert(p);
		st.insert(p + 1);
	}

	for (auto x : st) {
		cnt = mp[x];
		ans += max(0, cnt - last);
		last = cnt;
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