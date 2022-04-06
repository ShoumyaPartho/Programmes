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
	int tc, n, k, ans; cin >> tc;
	while (tc--) {
		cin >> n >> k; ans = 0;
		ans += (n - k);
		if (k % 2 == 0) ans += (k - (k / 2));
		else ans += (k - (k / 2) - 1);
		cout << ans << endl;
		for (int i = k + 1; i <= n; i++) cout << i << " ";
		if (k % 2 == 0) {
			for (int i = k - 1; i >= (k >> 1); i--) cout << i << " \n"[i == (k >> 1)];
		}
		else {
			for (int i = k - 1; i > (k >> 1); i--) cout << i << " \n"[i == ((k >> 1) + 1)];
		}
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