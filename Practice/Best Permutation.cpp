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

	if (n == 1) {
		cout << 1 << endl;
		return;
	}

	if (n == 2) {
		cout << "1 2" << endl;
		return;
	}

	if (n == 3) {
		cout << "2 1 3" << endl;
		return;
	}

	if (n % 2) {
		for (int i = 1, num = n - 3; i <= n - 3; i += 2, num -= 2)
			cout << num << " " << num + 1 << " ";
		cout << "1 " << n - 1 << " " << n << endl;
	}

	else {
		cout << n - 2 << " ";

		for (int i = 2, num = n - 4; i <= n - 3; i += 2, num -= 2)
			cout << num << " " << num + 1 << " ";
		cout << "1 " << n - 1 << " " << n << endl;
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