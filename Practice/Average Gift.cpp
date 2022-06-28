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
	ll tc, n, x, k, maxi, mini; cin >> tc;

	while (tc--) {
		cin >> n >> x; maxi = 0, mini = 1e9 + 7;

		for (int i = 1; i <= n; i++) {
			cin >> k;
			maxi = max(maxi, k);
			mini = min(mini, k);
		}

		if (x >= mini and x <= maxi)
			cout << "YES" << endl;

		else
			cout << "NO" << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(3);
	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}