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
	int n, m, cnt = 0; cin >> n >> m;
	vector<vector<int> > check(n + 1, vector<int> (n + 1, 0));
	int ara[n + 1] = {0};

	for (int j = 1; j <= m; j++) {
		for (int i = 1; i <= n; i++)
			cin >> ara[i];

		for (int i = 1; i < n; i++)
			check[ara[i]][ara[i + 1]]++, check[ara[i + 1]][ara[i]]++;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if ((not check[i][j]) and (i != j))
				cnt++;
		}
	}

	cout << cnt / 2 << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}