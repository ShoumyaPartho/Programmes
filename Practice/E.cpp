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
	int ptr = -1, cnt, len = s.size();

	for (int i = len - 2; i >= 0; i--) {
		if (s[i] != s[len - 1]) {
			ptr = i;
			break;
		}
	}

	if (ptr == -1) {
		cout << s[len - 1] << endl;
		return;
	}

	cnt = len - 1 - ptr;

	if (cnt % 2) {
		if (cnt > 1)
			cout << s[len - 1];

		for (int i = ptr; i >= 0; i--)
			cout << s[i];
		cout << endl;

		return;
	}

	else {
		for (int i = ptr; i >= 0; i--)
			cout << s[i];
		cout << endl;

		return;
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