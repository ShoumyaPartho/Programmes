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
	int n, x, flag = 1; cin >> n;
	unordered_map<int, int> mp;

	for (int i = 1; i <= (2 * n); i++) {
		cin >> x;
		mp[x]++;
	}

	for (auto it : mp) {
		if (it.second > 2) {
			flag = 0;
			break;
		}
	}

	cout << (flag ? "Yes" : "No") << endl;
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