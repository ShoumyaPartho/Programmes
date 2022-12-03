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
	int n, x, t, flag = 0; cin >> n >> x;

	for (int i = 1; i <= n; i++) {
		cin >> t;

		if (t == x and (not flag)) {
			cout << i << endl;
			flag = 1;
		}
	}
}

int main() {
	fastIO();

	solve();

	return 0;
}