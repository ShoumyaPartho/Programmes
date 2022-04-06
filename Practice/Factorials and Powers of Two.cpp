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
	ll tc, n, fact[20] = {1}, ans, temp, rem; cin >> tc;

	for (int i = 1; i < 16; i++)
		fact[i] = i * fact[i - 1];

	while (tc--) {
		cin >> n;
		ans = __builtin_popcountll(n);

		for (int i = 0; i < (1 << 15); i++) {
			temp = 0;

			for (int j = 0; j < 15; j++) {
				if (i & (1 << j))
					temp += fact[j];
			}

			rem = n - temp;

			if (rem < 0)
				continue;

			ans = min(ans, (ll) __builtin_popcountll(i) + __builtin_popcountll(rem));
		}

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