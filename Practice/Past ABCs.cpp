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
	int num = 0;

	for (int i = 3; i < 6; i++) {
		num *= 10;
		num += (s[i] - '0');
	}

	if (num < 350 and num != 316 and num)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}