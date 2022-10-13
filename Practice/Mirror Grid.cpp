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
	int n, ans = 0, elmnt; cin >> n;
	vector<vector<char> > grid(n + 1, vector<char> (n + 1, '0'));
	string s;

	for (int i = 1; i <= n; i++) {
		cin >> s;

		for (int j = 1; j <= n; j++)
			grid[i][j] = s[j - 1];
	}

	for (int i = 1, j = n; i < j; i++, j--) {
		for (int x = i; x < j; x++) {
			elmnt = 0;
			elmnt += (grid[i][x] == '1');
			elmnt += (grid[x][j] == '1');
			elmnt += (grid[j][j - x + i] == '1');
			elmnt += (grid[j - x + i][i] == '1');

			if (elmnt >= 2)
				ans += 4 - elmnt;

			else
				ans += elmnt;
		}
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














// // Solved by: Shoumya

// #include<bits/stdc++.h>
// using namespace std;

// #define endl "\n"
// #define ll long long int

// void fastIO() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0), cout.tie(0);

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
// }

// void solve() {
// 	int n, ans = 0, ax, ay, bx, by, cx, cy, dx, dy, tCnt; cin >> n;
// 	vector<vector<int> > grid(n + 1, vector<int> (n + 1, 0));
// 	string s;

// 	for (int i = 1; i <= n; i++) {
// 		cin >> s;
// 		for (int j = 1; j <= n; j++)
// 			grid[i][j] = s[j - 1] - '0';
// 	}

// 	for (int lo = 1, hi = n; lo < hi; lo++, hi--) {
// 		for (int i = lo, it = 1; i < hi; i++, it++) {
// 			ax = lo, ay = i;
// 			bx = ay, by = hi;
// 			cx = hi, cy = hi - it + 1;
// 			dx = hi - it + 1, dy = ax;

// 			tCnt = 1;

// 			tCnt += (grid[ax][ay] == grid[bx][by]);
// 			tCnt += (grid[ax][ay] == grid[cx][cy]);
// 			tCnt += (grid[ax][ay] == grid[dx][dy]);


// 			ans += min(tCnt, 4 - tCnt);
// 		}
// 	}

// 	cout << ans << endl;
// }

// int main() {
// 	fastIO();

// 	// solve();

// 	int tc, t; cin >> t;

// 	for (tc = 1; tc <= t; tc++) {
// 		// cout<<"Case "<<tc<<": ";
// 		solve();
// 	}

// 	return 0;
// }