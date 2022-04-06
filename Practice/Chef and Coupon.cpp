#include<iostream>
#include<ctime>
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int tc, x, a, b, c, d, dCost, cCost; cin >> tc;
	while (tc--) {
		cin >> d >> c; a = b = 0;
		for (int i = 1; i <= 3; i++) {
			cin >> x; a += x;
		}
		for (int i = 1; i <= 3; i++) {
			cin >> x; b += x;
		}

		dCost = a + b + (2 * d);
		cCost = a + b + (a >= 150 ? c : d);
		if (a < 150) cCost += (b >= 150 ? c : d);
		else cCost += (b >= 150 ? 0 : d);

		if (cCost < dCost) cout << "YES\n";
		else cout << "NO\n";
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}