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
	int n, m, h, k, x = 0, y =  0, px, py, flag = 1, i = 0; cin >> n >> m >> h >> k;
	string s; cin >> s;
	set<pair<int, int> > st;

	for (int i = 1; i <= m; i++) {
		cin >> px >> py;
		st.insert({px, py});
	}

	while (i < n) {
		if (s[i] == 'R')
			x++;

		else if (s[i] == 'L')
			x--;

		else if (s[i] == 'U')
			y++;

		else if (s[i] == 'D')
			y--;

		h--, i++;

		if (h < 0) {
			flag = 0;
			break;
		}

		if (st.count({x, y}) and h < k) {
			st.erase({x, y});
			h = k;
		}

		// i++;
	}

	cout << (flag ? "Yes" : "No") << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}