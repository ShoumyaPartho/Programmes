#include<iostream>
#include<ctime>
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
	int tc, t, m, n; cin >> t;
	for (tc = 1; tc <= t; tc++) {
		cin >> m >> n;
		if (m == 1 or n == 1) cout << "Case " << tc << ": " << max(m, n) << endl;
		else if (m == 2 or n == 2) cout << "Case " << tc << ": " << (m * n / 8 * 4) + ((m * n) % 8 >= 4 ? 4 : (m * n) % 8) << endl;
		else cout << "Case " << tc << ": " << (m * n + 1) / 2 << endl;
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