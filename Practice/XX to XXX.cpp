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
	string s, t; cin >> s >> t;
	int lp1, rp1, lp2, rp2, tot1, tot2, flag = 1;

	if (s.size() > t.size()) {
		cout << "No" << endl;
		return;
	}

	for (int i = 0, j = 0; i < s.size() and j < t.size(); i++, j++) {
		if (s[i] != t[j]) {
			flag = 0;
			break;
		}
		lp1 = rp1 = i;

		for (int ii = i + 1; ii < s.size(); ii++) {
			if (s[i] == s[ii])
				rp1 = ii;
			else
				break;
		}

		tot1 = rp1 - lp1 + 1;

		lp2 = rp2 = j;

		for (int jj = j + 1; jj < t.size(); jj++) {
			if (t[j] == t[jj])
				rp2 = jj;

			else
				break;
		}

		tot2 = rp2 - lp2 + 1;

		if ((tot1 > tot2) or (tot1 == 1 and tot2 > 1)) {
			flag = 0;
			break;
		}

		i = rp1, j = rp2;

		if ((i == s.size() - 1) and (j < t.size() - 1))
			flag = 0;
	}

	cout << (flag ? "Yes" : "No") << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t = 1;// cin >> t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}