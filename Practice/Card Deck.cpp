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
	int tc, n, idx; cin >> tc;
	while (tc--) {
		cin >> n; idx = n; int ara[n + 1] = {0}, mx[n + 1] = {0};
		for (int i = 1; i <= n; i++) cin >> ara[i], mx[i] = max(mx[i - 1], ara[i]);

		for (int i = n; i; i--) {
			if (ara[i] == mx[i]) {
				for (int j = i; j <= idx; j++) cout << ara[j] << " ";
				idx = i - 1;
			}
		}
		cout << "\n";
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Writhe code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}