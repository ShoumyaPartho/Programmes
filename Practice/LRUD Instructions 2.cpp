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
	int n, x = 0, y = 0, flag = 0; cin >> n;
	string s; cin >> s;
	set<pair<int, int> > st; st.insert({0, 0});

	for (auto i : s) {
		if (i == 'L')
			x--;

		else if (i == 'R')
			x++;

		else if (i == 'U')
			y++;

		else if (i == 'D')
			y--;

		if (st.count({x, y})) {
			flag = 1;
			break;
		}

		st.insert({x, y});
	}

	cout << (flag ? "Yes" : "No") << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t = 1; // cin>>t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}