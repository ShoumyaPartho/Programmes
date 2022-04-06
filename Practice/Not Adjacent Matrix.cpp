// Solved by: Shoumya

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
	int tc, n, num; cin >> tc;

	while (tc--) {
		cin >> n; num = 1;

		if (n == 1) {
			cout << 1 << endl;
			continue;
		}

		if (n == 2) {
			cout << -1 << endl;
			continue;
		}

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				cout << num << " \n"[j == n];
				num += 2;
				if (num > (n * n))
					num = 2;
			}
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