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
	ll n, cnt1 = 0, cnt2 = 0, dif1, dif2; cin >> n;
	vector<ll> a(n + 1, 0), b(n, 0);
	unordered_set<ll> st;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		st.insert(a[i]);
	}

	for (int i = 1; i < n; i++)
		cin >> b[i];

	sort(a.begin() + 1, a.end());
	sort(b.begin() + 1, b.end());

	dif1 = b[1] - a[1], dif2 = b[1] - a[2];

	for (int i = 1; i < n; i++) {
		if (not st.count(b[i] - dif1))
			cnt1++;

		if (not st.count(b[i] - dif2))
			cnt2++;
	}

	if (cnt1 and (not cnt2) and dif2 > 0)
		cout << dif2 << endl;

	else if ((not cnt1) and cnt2 and dif1 > 0)
		cout << dif1 << endl;

	else
		cout << (min(dif1, dif2) > 0 ? min(dif1, dif2) : max(dif1, dif2)) << endl;
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