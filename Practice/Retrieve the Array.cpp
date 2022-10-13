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
	vector<ll> nums(n + 1, 0);

	for (int i = 1; i <= n; i++) {
		cin >> nums[i];
		sum += nums[i];
	}

	sum /= (n + 1);

	for (int i = 1; i <= n; i++)
		cout << nums[i] - sum << " \n"[i == n];
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