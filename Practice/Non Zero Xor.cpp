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
	int n, ans = 0, x, p = 0; cin >> n;
	set<int> st; st.insert(0);

	for (int i = 1; i <= n; i++) {
		cin >> x;
		p ^= x;

		if (st.count(p)) {
			ans++; p = 0;
			st.clear();
			st.insert(0);
		}

		else
			st.insert(p);
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