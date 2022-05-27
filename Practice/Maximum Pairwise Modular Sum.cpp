// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
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
	ll tc, n, m, mod, ans, temp, t, maxi, mini; cin >> tc;

	while (tc--) {
		cin >> n >> m; ans = 0ll, mod = m;

		vector<ll> ara(n + 1, 0);

		for (int i = 1; i <= n; i++)
			cin >> ara[i];

		sort(ara.begin() + 1, ara.end());

		for (int i = 1; i <= n; i++) {
			temp = ara[i] + ara[n];
			maxi = max(ara[i], ara[n]), mini = min(ara[i], ara[n]);
			temp += ((maxi - mini) % mod);

			ans = max(ans, temp);

			t = (mini - maxi) * (-1ll);

			t %= mod;
			t = mod - t;

			if (t == mod)
				t = 0;

			temp = ara[i] + ara[n] + t;

			ans = max(ans, temp);
		}

		cout << ans << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(3);
	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}