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
	ll n, q, x, tmp = 0, fob; cin >> n >> q;
	ll nums[n + 1];

	for (int i = 1; i <= n; i++)
		cin >> nums[i];

	for (int i = 1; i <= q; i++) {
		cin >> x;
		tmp |= x;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 0; (1ll << j) <= nums[i]; j++) {
			if (nums[i] & (1ll << j)) {
				fob = j;
				break;
			}
		}

		for (int j = fob; j > 0; j--) {
			if ((1ll << j)&tmp)
				nums[i] |= (1ll << (j - 1));
		}
	}

	for (int i = 1; i <= n; i++)
		cout << nums[i] << " \n"[i == n];
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