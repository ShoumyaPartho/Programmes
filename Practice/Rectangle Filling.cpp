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
	int n, m; cin >> n >> m;
	int minColW = m + 1, minColB = m + 1, minRowW = n + 1, minRowB = n + 1, maxColW = 0, maxColB = 0, maxRowW = 0, maxRowB = 0;

	for (int i = 1; i <= n; i++) {
		string s; cin >> s;

		for (int j = 0; j < m; j++) {
			if (s[j] == 'B') {
				minColB = min(minColB, j + 1);
				minRowB = min(minRowB, i);
				maxColB = max(maxColB, j + 1);
				maxRowB = max(maxRowB, i);
			}

			else if (s[j] == 'W') {
				minColW = min(minColW, j + 1);
				minRowW = min(minRowW, i);
				maxColW = max(maxColW, j + 1);
				maxRowW = max(maxRowW, i);
			}
		}
	}

	if ((minColW == 1 and maxColW == m and minRowW == 1 and maxRowW == n) or (minColB == 1 and maxColB == m and minRowB == 1 and maxRowB == n))
		cout << "YES" << endl;

	else
		cout << "NO" << endl;

	// cout << minColB << " " << minRowB << endl;
	// cout << minColW << " " << minRowW << endl;
	// cout << maxColW << " " << maxRowW << endl;
	// cout << maxColB << " " << maxRowB << endl;
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