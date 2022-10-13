// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
}

void solve() {
	int a, b, c; cin >> a >> b >> c;

	if ((a + b + c) % 3)
		cout << "Fight" << endl;

	else
		cout << "Peaceful" << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cout << "Case " << tc << ": ";
		solve();
	}

	return 0;
}