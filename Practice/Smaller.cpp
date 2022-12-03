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
	ll q, lenA = 0, lenB = 0, n, k; cin >> q;
	unordered_map<char, ll> a, b;
	string s;

	a['a'] = b['a'] = 1;

	while (q--) {
		cin >> n >> k >> s;

		if (n == 1) {
			lenA += (k * s.size());

			for (auto ch : s)
				a[ch] += k;
		}

		else if (n == 2) {
			lenB += (k * s.size());

			for (auto ch : s)
				b[ch] += k;
		}

		if (b.size() > 1)
			cout << "YES" << endl;

		else if (a.size() > 1)
			cout << "NO" << endl;

		else if (lenA >= lenB)
			cout << "NO" << endl;

		else
			cout << "YES" << endl;
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