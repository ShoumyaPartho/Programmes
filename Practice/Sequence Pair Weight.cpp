// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<map>
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
	ll tc, n, ans, res, x; cin >> tc;

	while (tc--) {
		cin >> n; res = 0ll;

		if (n == 1ll) {
			cin >> x;
			cout << 0 << endl;
			continue;
		}

		vector<ll> ara(n + 1, 0), dp(n + 1, 0);
		map<ll, ll> mp;

		for (int i = 1; i <= n; i++)
			cin >> ara[i];

		mp[ara[1]]++;

		for (int i = 2; i <= n; i++) {
			ans = dp[i - 1] + mp[ara[i]];
			dp[i] = ans;
			res += ans;
			mp[ara[i]] += i;
		}

		cout << res << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}