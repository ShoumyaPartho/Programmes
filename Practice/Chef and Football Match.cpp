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
	int n, t, a, b, x = -1, y = -1; cin >> n;

	while (n--) {
		cin >> t >> a >> b;

		if (a == b) {
			cout << "YES" << endl;
			x = y = a;
		}

		else if (t == 1) {
			cout << "YES" << endl;
			x = a, y = b;
		}

		else {
			if (x == -1)
				cout << "NO" << endl;

			else if (a >= x and b >= x and a >= y and b >= y)
				cout << "NO" << endl;

			else if (a >= x and b < x) {
				cout << "YES" << endl;
				x = a;
				y = b;
			}

			else if (a<x and b >= x) {
				cout << "YES" << endl;
				x = b;
				y = a;
			}

			else if (a >= y and b < y) {
				cout << "YES" << endl;
				x = b;
				y = a;
			}

			else if (a<y and b >= y) {
				cout << "YES" << endl;
				x = a;
				y = b;
			}

			else
				cout << "NO" << endl;
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