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
	string s; cin >> s;
	int idx = -1;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'a')
			idx = i;
	}

	cout << (idx == -1 ? idx : idx + 1) << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}