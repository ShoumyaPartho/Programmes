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
	int n, ans = 0, i, j; cin >> n; j = n;
	pair<int, int> frnds[n + 1];

	for (int i = 1; i <= n; i++)
		cin >> frnds[i].first;

	for (int i = 1; i <= n; i++)
		cin >> frnds[i].second;

	sort(frnds + 1, frnds + n + 1, [&](pair<int, int> &a, pair<int, int> &b) {
		return (a.second - a.first) > (b.second - b.first);
	});

	for (i = 1; i <= n; i++) {
		while ((frnds[i].first + frnds[j].first) > (frnds[i].second + frnds[j].second))
			j--;

		if (j <= i)
			break;

		ans++; j--;
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