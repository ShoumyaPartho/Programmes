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
	string s; cin >> s;
	int len = s.size(), t, mini[len] = {0};
	mini[len - 1] = s[len - 1] - '0';

	for (int i = len - 2; i >= 0; i--) {
		t = s[i] - '0';

		mini[i] = (t < mini[i + 1] ? t : mini[i + 1]);
	}

	for (int i = 0; i < len; i++) {
		if ((s[i] - '0') != mini[i]) {
			t = min(s[i] - '0' + 1, 9);
			s[i] = '0' + t;
		}
	}

	sort(s.begin(), s.end());

	cout << s << endl;
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