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
	int n, mn, mx, l, r; cin >> n;
	mn = l = 1, mx = r = n;
	int ara[n + 5] = {0};

	for (int i = 1; i <= n; i++)
		cin >> ara[i];

	while (l <= r) {
		if (ara[l] == mn) {
			mn++;
			l++;
		}

		else if (ara[l] == mx) {
			mx--;
			l++;
		}

		else if (ara[r] == mn) {
			r--;
			mn++;
		}

		else if (ara[r] == mx) {
			mx--;
			r--;
		}

		else
			break;
	}

	if (l <= r)
		cout << l << " " << r << endl;

	else
		cout << -1 << endl;
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