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
	int n, x, prev = 0, unique, ans = 1, tmp = 1; cin >> n;
	set<int> st;
	vector<int> ara;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		st.insert(x);
	}

	sort(ara.begin() + 1, ara.end());
	unique = st.size();

	for (auto it : st)
		ara.push_back(it);

	for (int i = unique - 1; i >= 0; i--) {
		tmp = 1 - tmp;
		x = ara
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