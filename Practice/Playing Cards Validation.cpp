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
	int n, flag = 1; cin >> n;
	string s;
	set<string> st;

	while (n--) {
		cin >> s;

		if (st.count(s))
			flag = 0;

		if (not (s[0] == 'H' or s[0] == 'D' or s[0] == 'C' or s[0] == 'S'))
			flag = 0;

		if (not ((s[1] >= '2' and s[1] <= '9') or s[1] == 'A' or s[1] == 'T' or s[1] == 'J' or s[1] == 'Q' or s[1] == 'K'))
			flag = 0;

		st.insert(s);
	}

	cout << (flag ? "Yes" : "No") << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}