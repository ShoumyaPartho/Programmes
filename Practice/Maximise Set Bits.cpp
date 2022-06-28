// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
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
	int n, k, cnt = 0; cin >> n >> k;

	for (int i = 1; i <= 35; i++) {
		if (k <= n) {
			cnt += k;
			break;
		}

		if (n % 2 == k % 2) {
			cnt += n;
			k -= n;
		}

		else {
			cnt += n - 1;
			k   -= n - 1;
		}
		k >>= 1;
	}
	cout << cnt << endl;
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(3);
	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}