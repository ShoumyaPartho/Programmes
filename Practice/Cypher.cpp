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
	int n, b; cin >> n;
	int nums[n + 1];
	string s;

	for (int i = 1; i <= n; i++)
		cin >> nums[i];

	for (int i = 1; i <= n; i++) {
		cin >> b >> s;

		for (int j = 0; j < b; j++) {
			if (s[j] == 'U')
				nums[i] = (nums[i] - 1 + 10) % 10;

			else if (s[j] == 'D')
				nums[i] = (nums[i] + 1) % 10;
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