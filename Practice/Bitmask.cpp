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
	string s; cin >> s; reverse(s.begin(), s.end());
	ll n, ans = 0, len = s.size(), temp = 0; cin >> n;

	for (int i = 0; i < len; i++) {
		if (s[i] == '1')
			ans += (1ll << i);
	}

	if (ans > n) {
		cout << -1 << endl;
		return;
	}

	for (int i = len - 1; i >= 0; i--) {
		if (s[i] == '?') {
			temp = (1ll << i);

			if ((ans + temp) <= n)
				ans += temp;
		}
	}

	cout << ans << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}