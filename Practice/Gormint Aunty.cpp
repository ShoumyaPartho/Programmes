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
	int n, k, lo = 1, hi, mid, x, ans, flag;
	cin >> n >> k; hi = ans = n;

	// if (n % k == 0) {
	// 	cout << k << endl;

	// 	x = 0;
	// 	for (int i = 1; i <= n; i++) {
	// 		x = (x % k) + 1;
	// 		cout << x << " \n"[i == n];
	// 	}
	// }

	// else {
	// 	cout << k + 1 << endl;

	// 	x = 0;
	// 	for (int i = 1; i <= n; i++) {
	// 		x = (x % (k + 1)) + 1;
	// 		cout << x << " \n"[i == n];
	// 	}
	// }

	while (lo <= hi) {
		mid = (lo + hi) >> 1, x = 0, flag = 1;
		int ara[n + 1] = {0};
		set<int> st;

		for (int i = 1; i <= n; i++) {
			x = (x % mid) + 1;
			ara[i] = x;
		}

		for (int i = 1; i <= k; i++)
			st.insert(ara[i]);

		if (st.size() < k) {
			lo = mid + 1;
			continue;
		}

		for (int i = k + 1, begin = 1; begin < n; i++) {
			st.erase(ara[begin++]);

			if (i > n)
				i = 1;
			st.insert(ara[i]);

			if (st.size() < k) {
				lo = mid + 1;
				flag = 0;
				break;
			}
		}

		if (not flag)
			continue;

		ans = min(ans, mid);
		hi = mid - 1;
	}

	cout << ans << endl;

	x = 0;
	for (int i = 1; i <= n; i++) {
		x = (x % ans) + 1;
		cout << x << " \n"[i == n];
	}
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