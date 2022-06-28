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
	int n, k, ans = 0, temp; cin >> n >> k;
	int ara[n + 1] = {0}, b[n + 1] = {0};

	for (int i = 1; i <= n; i++)
		cin >> ara[i];

	for (int i = 1; i < n; i++) {
		if (ara[i] < 2 * ara[i + 1])
			b[i] = 1;
		b[i] += b[i - 1];
	}

	b[n] = b[n - 1];

	for (int i = k + 1; i <= n; i++) {
		temp = b[i] - b[i - k - 1];
		if (b[i] != b[i - 1])
			temp--;
		if (temp == k)
			ans++;
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