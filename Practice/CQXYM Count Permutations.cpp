// Bijection property of combinatorics to be observed.

// Bijection means a function, say function a, which has
// one-to-one ans onto relationship with another function
// say b. We calculated (2n!) and then divided it by 2.

// Tutorial link: https://www.youtube.com/watch?v=IJbU7jg6sow


// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const ll MOD = 1e9 + 7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	ll tc, n, ans; cin >> tc;

	while (tc--) {
		cin >> n; ans = 1;

		for (int i = 3; i <= n + n; i++)
			ans = (ans * i) % MOD;

		cout << ans << endl;
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