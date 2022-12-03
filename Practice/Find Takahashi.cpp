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
	int n, x, ans = 0, idx = 0; cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> x;

		if (x > ans) {
			ans = x;
			idx = i;
		}
	}

	cout << idx << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}