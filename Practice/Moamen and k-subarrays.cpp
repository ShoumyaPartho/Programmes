// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<iomanip>
#include<vector>
#include<algorithm>
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
	int tc, n, k, cnt; cin >> tc;

	while (tc--) {
		cin >> n >> k; cnt = 1;

		vector<int> ara(n + 1, 0);

		for (int i = 1; i <= n; i++)
			cin >> ara[i];

		for (int p = 2; p <= n; p++) {
			if (ara[p] < ara[p - 1]) {
				cnt++;

				// if (p == n)
				// 	cnt++;
			}
		}

		cout << (cnt <= k ? "YES" : "NO") << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); // cout.precision(10);
	cout << fixed;
	cout << setprecision(6) << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC << " mili seconds" << endl;
#endif

	return 0;
}