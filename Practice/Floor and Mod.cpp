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
	long long int tc, x, y, ans; cin >> tc;
	while (tc--) {
		cin >> x >> y;
		ans = 0;

		for (long long int i = 1; i * i <= x; i++)
			ans += max(0ll, min(y, x / i - 1) - i);
		cout << ans << "\n";
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