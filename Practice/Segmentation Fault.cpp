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
	int n, l, r, cnt = 0; cin >> n;
	vector<int> track(n + 5, 0);
	vector<pair<int, int> > queries(n + 5);

	for (int i = 1; i <= n; i++) {
		cin >> l >> r;
		track[l]++;
		track[r + 1]--;
		queries[i] = {l, r};
	}

	for (int i = 1; i <= n; i++) {
		track[i] += track[i - 1];
		if (track[i] == n - 1 and (queries[i].first > i or queries[i].second < i))
			cnt++;
	}

	cout << cnt << endl;

	for (int i = 1; i <= n; i++) {
		if (track[i] == n - 1 and (queries[i].first > i or queries[i].second < i))
			cout << i << endl;
	}
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