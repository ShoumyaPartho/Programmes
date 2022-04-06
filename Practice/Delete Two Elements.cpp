// Famous Data Structure Problem
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
	ll tc, n, sum, twoSum, m, ans; cin >> tc;

	while (tc--) {
		cin >> n; sum = ans = 0;
		vector<ll> ara(n + 1, 0);

		for (int i = 1; i <= n; i++) {
			cin >> ara[i];
			sum += ara[i];
		}

		sum *= 2ll;

		if (sum % n) {
			cout << 0 << endl;
			continue;
		}
		m = sum / n;

		map<ll, ll> mp;

		for (int i = 1; i <= n; i++) {
			ans += mp[m - ara[i]];
			mp[ara[i]]++;
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