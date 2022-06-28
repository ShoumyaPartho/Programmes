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
	vector<vector<char> > board(9, vector<char>(9, '.'));

	for (int i = 1; i <= 8; i++) {
		for (int j = 1; j <= 8; j++)
			cin >> board[i][j];
	}

	for (int i = 2; i <= 7; i++) {
		for (int j = 2; j <= 7; j++) {
			if (board[i][j] == '#' and
			        board[i - 1][j - 1] == '#' and
			        board[i - 1][j + 1] == '#' and
			        board[i + 1][j - 1] == '#' and
			        board[i + 1][j + 1] == '#') {
				cout << i << " " << j << endl;
				return;
			}
		}
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