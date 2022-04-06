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
	int n, q, k, l, r;
	cin >> n >> q >> k;
	int ara[n];

	for (int i = 0; i < n; i++) cin >> ara[i];
	while (q--) {
		cin >> l >> r;
		cout << k + ara[r - 1] - ara[l - 1] - 2 * (r - l) - 1 << "\n";
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