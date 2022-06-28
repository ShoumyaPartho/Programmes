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
	int n, q, t, x, pos, st = 0, num; cin >> n >> q;
	vector<int> nums(n + 1, 0), states(n + 1, 0);
	ll sum = 0;

	for (int i = 1; i <= n; i++) {
		cin >> nums[i];
		sum += nums[i];
	}

	for (int i = 1; i <= q; i++) {
		cin >> t;

		if (t == 1) {
			cin >> pos >> x;
			if (states[pos] < st) {
				states[pos] = st;
				nums[pos] = num;
				sum += x - nums[pos];
				nums[pos] = x;
			}

			else {
				sum += x - nums[pos];
				nums[pos] = x;
			}

			cout << sum << endl;
		}

		if (t == 2) {
			cin >> x;
			st = i;
			num = x;
			sum = (1ll * x * n);

			cout << sum << endl;
		}
	}
}

int main() {
	fastIO();

	// solve();

	int tc, t = 1; // cin>>t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}