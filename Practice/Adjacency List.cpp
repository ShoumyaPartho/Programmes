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
	int n, m, x, y, t;
	cin >> n >> m; t = m;
	vector<set<int> > lst(n + 1);

	while (m--) {
		cin >> x >> y;
		lst[x].insert(y);
		lst[y].insert(x);
	}

	for (int i = 1; i <= n; i++) {
		cout << lst[i].size() << " ";

		for (auto it : lst[i])
			cout << it << " ";
		cout << endl;
	}
}

int main() {
	fastIO();

	solve();

	return 0;
}