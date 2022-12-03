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
	int n, oddOne = 0, cntOne = 0, cntZero = 0, cnt = 0; cin >> n;
	string s; cin >> s;

	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			cnt = 0;

			for (int j = i; j < n; j++) {
				if (s[j] != '1') {
					i = j - 1;
					break;
				}
				cnt++;

				if (j == n - 1)
					i = n - 1;
			}

			if (cnt & 1)
				oddOne++;
		}
	}

	cout << ((not oddOne) or (n == 1) ? "YES" : "NO") << endl;
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