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
	int tc, n, num, temp, x, y; cin >> tc;

	while (tc--) {
		cin >> n;
		int ara[n];
		for (int i = 0; i < n; i++) cin >> ara[i];
		num = 0;
		for (int i = 1; i < n; i++) {
			x = max(ara[i], ara[i - 1]);
			y = min(ara[i], ara[i - 1]);
			if ((double)(x + y - 1.0) / y * 1.0 > 2.0) {
				while ((double)(x + y - 1.0) / y * 1.0 > 2.0) {
					x = (x + 1) / 2, num++;
				}
			}
		}
		cout << num << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();

	solve();

	clock_t stop = clock(); cout.precision(10);
#ifndef ONLINE_JUDGE
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}