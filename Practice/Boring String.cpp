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
	int n, left, right, ans = 0; cin >> n;
	string s, ts = ""; cin >> s;
	set<string> st;

	for (int i = 0; i < n;) {
		left = i, right = i, ts = s[left]; st.insert(ts);

		while (right <= n) {
			if (right == n) {
				i = right;
				ans = max(ans, right - left - 1);
				break;
			}

			if (s[right] == s[left]) {
				ts += s[right];

				if (st.count(ts))
					ans = max(ans, right - left + 1);

				st.insert(ts);
				// right++;
				// continue;
			}

			else {
				ans = max(ans, right - left - 1);
				// if (st.count(ts))
				// 	ans = max(ans, right - left);
				st.insert(ts);
				ts = "";
				i = right;
				break;
			}

			right++;
		}
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