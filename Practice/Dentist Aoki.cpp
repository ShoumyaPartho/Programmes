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
	int n, q; cin >> n >> q;
	int total = n, x;
	vector<int> teeth(n + 1, 1);

	for (int i = 1; i <= q; i++) {
		cin >> x;

		(teeth[x] ? total-- : total++);

		teeth[x] = 1 - teeth[x];
	}

	cout << total << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}