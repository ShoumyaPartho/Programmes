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
	int n; cin >> n;

	if (n % 5 == 0) {
		cout << n << endl;
		return;
	}

	int lo = (n / 5) * 5, hi = ((n + 4) / 5) * 5;

	if ((hi - n) < (n - lo)) {
		cout << hi << endl;
		return;
	}

	cout << lo << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}