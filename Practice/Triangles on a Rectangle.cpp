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
	vector<ll> ara;
	ll tc, w, h, k, ans; cin >> tc;

	while (tc--) {
		cin >> w >> h; ans = 0;

		cin >> k;
		ara.clear(); ara.assign(k + 1, 0);

		for (int i = 1; i <= k; i++)
			cin >> ara[i];

		ans = max(ans, (ara[k] - ara[1]) * h);

		cin >> k;
		ara.clear(); ara.assign(k + 1, 0);

		for (int i = 1; i <= k; i++)
			cin >> ara[i];

		ans = max(ans, (ara[k] - ara[1]) * h);

		cin >> k;
		ara.clear(); ara.assign(k + 1, 0);

		for (int i = 1; i <= k; i++)
			cin >> ara[i];

		ans = max(ans, (ara[k] - ara[1]) * w);

		cin >> k;
		ara.clear(); ara.assign(k + 1, 0);

		for (int i = 1; i <= k; i++)
			cin >> ara[i];

		ans = max(ans, (ara[k] - ara[1]) * w);

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