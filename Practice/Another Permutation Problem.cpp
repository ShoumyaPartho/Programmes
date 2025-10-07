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
	ll n, sum, ans = 0, maxi, tmp; cin >> n;

	for (int i = n; i; i--) {
		sum = maxi = 0;

		for (int j = i; j <= n; j++) {
			tmp = j * (i + n - j);
			maxi = max(maxi, tmp);
			sum += tmp;
		}

		for (int j = i - 1; j; j--)
			sum += j * j;

		sum -= maxi;
		ans = max(ans, sum);
	}

	cout << ans << endl;
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