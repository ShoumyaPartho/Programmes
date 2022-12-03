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
	ll n; cin >> n;
	ll a[n + 1], b[n + 1], p[n + 1], coords = 1;
	map<ll, ll> compress;

	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i] >> p[i];
		b[i]++;
		compress[a[i]], compress[b[i]];
	}

	for (auto &it : compress)
		it.second = coords++;

	vector<vector<pair<ll, ll> > > projects(coords);
	vector<ll> dp(coords, 0);

	for (int i = 1; i <= n; i++)
		projects[compress[b[i]]].push_back({compress[a[i]], p[i]});

	for (int i = 1; i < coords; i++) {
		dp[i] = dp[i - 1];

		for (auto it : projects[i])
			dp[i] = max(dp[i], dp[it.first] + it.second);
	}

	cout << dp[coords - 1] << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}