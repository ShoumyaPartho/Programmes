// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
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
	int tc, n, x; cin >> tc;

	while (tc--) {
		cin >> n;
		vector<int> ara(110, 0);

		for (int i = 1; i <= n; i++) {
			cin >> x;
			ara[x]++;
		}

		for (int i = 1; i <= 100; i++) {
			if (ara[i]) {
				cout << n - ara[i] << endl;
				break;
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