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
	int ta = 0, ao = 0, x;

	for (int i = 1; i <= 9; i++) {
		cin >> x;
		ta += x;
	}

	for (int i = 1; i < 9; i++) {
		cin >> x;
		ao += x;
	}

	cout << (ta - ao + 1) << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}