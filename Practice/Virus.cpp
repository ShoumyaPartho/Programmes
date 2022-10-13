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
	int n, m, x, cnt = 0, ans = 0, temp; cin >> n >> m;
	int infected[m + 1] = {0};
	vector<int> strs(1, 0);

	for (int i = 1; i <= m; i++)
		cin >> infected[i];

	sort(infected + 1, infected + 1 + m);

	for (int i = 2; i <= m; i++) {
		x = infected[i] - infected[i - 1] - 1;
		strs.push_back(x);
	}

	x = n - infected[m] + infected[1] - 1;

	if (x > 0)
		strs.push_back(x);

	sort(strs.begin() + 1, strs.end(), greater<int>());

	for (int i = 1; i < strs.size(); i++) {
		if (strs[i] - 2 * cnt > 0) {
			temp = max(1, strs[i] - 2 * cnt - 1);
			ans += temp;
		}
		cnt += 2;
	}

	cout << n - ans << endl;
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