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
	ll tc, n, m, ans, mini, tempAns; cin >> tc;

	while (tc--) {
		cin >> n >> m;

		if ((n == 1 and m > 2) or (n > 2 and m == 1))
			ans = -1;

		else if (n == m)
			ans = n - 1 + m - 1;

		else if (n < m) {
			tempAns = (n - 1) << 1;
			tempAns += (m - n);
			tempAns += ((m - n) / 2) * 2;

			ans = tempAns;
		}

		else {
			tempAns = (m - 1) << 1;
			tempAns += (n - m);
			tempAns += ((n - m) / 2) * 2;

			ans = tempAns;
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