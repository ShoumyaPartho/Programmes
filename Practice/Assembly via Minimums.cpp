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
	int n, nn, x, cnt, freq, tmp; cin >> n; nn = n;
	map<int, int> mp;
	vector<int> track;

	for (int i = 0; i < (n * (n - 1) / 2); i++) {
		cin >> x;
		mp[x]++;
	}

	for (auto it : mp) {
		x = it.first, cnt = it.second, freq = 0, tmp = n;

		while (cnt > 0) {
			cnt -= (tmp - 1);
			freq++;
			tmp--;
			n--;
		}

		for (int i = 0; i < freq; i++)
			track.push_back(x);
	}

	track.push_back(track.back());

	for (auto it : track)
		cout << it << " ";
	cout << endl;
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