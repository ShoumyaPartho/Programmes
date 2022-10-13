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
	ll n, l, r, x, q, num, t; cin >> n;
	vector<vector<ll> > bitCnt(40, vector<ll> (n + 5, 0));
	vector<ll> nums(n + 1, 0), zero(n + 5, 0);

	for (int i = 1; i <= n; i++) {
		cin >> nums[i];

		if (nums[i] == 0)
			zero[i] += 1;
	}

	for (int i = 1; i <= n; i++)
		zero[i] += zero[i - 1];

	for (int i = 1; i <= n; i++) {
		num = nums[i];
		if (num == 0)
			continue;

		for (int j = 0;; j++) {
			t = 1ll << j;

			if (num == t) {
				bitCnt[j][i] += 1;
				break;
			}

			else if (num & t)
				num -= t;
		}
	}

	for (int i = 0; i < 33; i++) {
		for (int j = 1; j <= n; j++)
			bitCnt[i][j] += bitCnt[i][j - 1];
	}

	cin >> q;

	while (q--) {
		cin >> l >> r >> x;
		num = x;

		if (x == 0) {
			cout << r - l + 1 - zero[r] + zero[l - 1] << endl;
			continue;
		}

		for (int j = 0;; j++) {
			t = 1ll << j;
			if (num == t) {
				num = j;
				break;
			}

			else if (num & t)
				num -= t;
		}
		cout << r - l + 1 - bitCnt[num][r] + bitCnt[num][l - 1] << endl;
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