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
	ll tc, n, temp, ans, cnt, x, maxi; cin >> tc;

	while (tc--) {
		cin >> n; maxi = ans = cnt = temp = 0;
		map<ll, ll> mp;

		for (auto i = 0; i < n; i++) {
			cin >> x;
			mp[x]++;
		}

		for (auto it : mp) {
			if (it.second > maxi)
				maxi = it.second;
		}

		cnt = maxi;

		while (cnt < n) {
			ans++; // Copying the array;
			temp = min(cnt, n - cnt); // Minimum elements to be copied;
			ans += temp; // Copying the elements;
			cnt += temp;
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