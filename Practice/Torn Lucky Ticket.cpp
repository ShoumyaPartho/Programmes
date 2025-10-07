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

ll getSum(ll n) {
	ll ans = 0;

	while (n) {
		ans += n % 10;
		n /= 10;
	}

	return ans;
}

ll getSum(string &ns, int j) {
	ll ans = 0 ;

	for (int i = 0; i < j; i++)
		ans += (ns[i] - '0');

	return ans;
}

void solve() {
	ll n; cin >> n;
	ll nums[n + 5], ans = 0;
	vector<vector<ll> > track(6, vector<ll> (50, 0));

	for (int i = 1; i <= n; i++)
		cin >> nums[i];

	for (int i = 1; i <= n; i++) {
		string ns = to_string(nums[i]);
		int len = ns.size();
		int sum = getSum(nums[i]);

		track[len][sum]++;
	}

	for (int i = 1; i <= n; i++) {
		string ns = to_string(nums[i]);
		int len = ns.size();
		int sum = getSum(nums[i]);

		for (int j = len; j; j--) {
			ll tSum = getSum(ns, j);
			ll remSum = sum - tSum;
			ll remLen = len - j;

			if (tSum < remSum or j < remLen)
				break;

			ans += track[j - remLen][tSum - remSum];
		}

		for (int j = 1; j < len; j++) {
			ll tSum = getSum(ns, j);
			ll remSum = sum - tSum;
			ll remLen = len - j;

			if (tSum > remSum or j > remLen)
				break;

			ans += track[remLen - j][remSum - tSum];
		}
	}

	cout << ans << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t = 1; // cin >> t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}