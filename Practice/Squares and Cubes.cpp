// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<set>
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
	ll tc, n, temp, ans; cin >> tc;

	while (tc--) {
		cin >> n; ans = 1;
		set<ll> nums;

		for (ll i = 2; i * i <= n; i++) {
			temp = i * i;

			if (temp <= n and nums.count(temp) == 0) {
				nums.insert(temp);
				ans++;
			}

			temp = i * i * i;

			if (temp <= n and nums.count(temp) == 0) {
				nums.insert(temp);
				ans++;
			}
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