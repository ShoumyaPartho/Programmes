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
	ll n, q, k, x; cin >> n >> q;
	set<ll> st;
	unordered_map<ll, ll> mp;
	ll preSums[n + 1] = {0};

	for (int i = 1; i <= n; i++) {
		cin >> x;
		preSums[i] = preSums[i - 1] + x;

		if (not st.count(x))
			mp[x] = i;

		st.insert(x);
	}

	while (q--) {
		cin >> x;
		auto it = st.upper_bound(x);

		if (it == st.end()) {
			cout << preSums[n] << " \n"[q == 0];
			continue;
		}

		k = mp[*it];

		cout << preSums[k - 1] << " \n"[q == 0];
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