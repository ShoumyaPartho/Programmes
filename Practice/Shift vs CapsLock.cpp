// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
const ll INF = 1e15;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	ll x, y, z, len; cin >> x >> y >> z;
	string s; cin >> s; len = s.size();
	vector<vector<ll> > dp(len + 1, vector<ll> (2, INF)); dp[0][0] = 0;

	for (int i = 0; i < len; i++) {
		ll v, cur = (s[i] == 'a' ? 0 : 1);

		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				v = dp[i][j];

				if (j != k)
					v += z;

				v += (cur == k ? x : y);

				dp[i + 1][k] = min(dp[i + 1][k], v);
			}
		}
	}

	cout << min(dp[len][0], dp[len][1]) << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}