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
	char a[n + 1][n + 1], b[n + 1][n + 1];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cin >> b[i][j];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i][j] != b[i][j]) {
				cout << i << " " << j << endl;
				return;
			}
		}
	}
}

int main() {
	fastIO();

	solve();

	return 0;
}