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
	ll n, sum = 0; cin >> n;
	string s; cin >> s;
	ll nums[n + 10] = {0}, vis[n + 10] = {0};

	for (int i = 0; i < n; i++)
		nums[i + 1] = (s[i] == '1');

	for (int i = 1; i <= n; i++) {
		if (not nums[i]) {
			if (not vis[i])
				sum += i;
			vis[i] = 1;

			for (int j = i + i; j <= n; j += i) {
				if (nums[j])
					break;

				if (not nums[j] and (not vis[j])) {
					sum += i;
					vis[j] = 1;
				}
			}
		}
	}

	cout << sum << endl;
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