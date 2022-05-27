// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<map>
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
	ll tc, n, ans; cin >> tc;

	while (tc--) {
		cin >> n; ans = 0;
		vector<ll> a(n + 1, 0), b(n + 1, 0);
		map<pair<ll, ll>, ll> mp;

		for (int i = 1; i <= n; i++)
			cin >> a[i];

		for (int i = 1; i <= n; i++)
			cin >> b[i];

		for (int i = 1; i <= n; i++) {
			ans += mp[ {b[i], a[i]}];
			mp[ {a[i], b[i]}]++;
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