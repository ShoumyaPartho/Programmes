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
	int tc, x[3], y[3], ans; cin >> tc;

	while (tc--) {
		ans = 0;

		for (int i = 0; i < 3; i++)
			cin >> x[i] >> y[i];

		if (y[0] == y[1] and y[2] < y[0])
			ans = max(ans, abs(x[0] - x[1]));

		else if (y[1] == y[2] and y[0] < y[1])
			ans = max(ans, abs(x[1] - x[2]));

		else if (y[0] == y[2] and y[1] < y[0])
			ans = max(ans, abs(x[2] - x[0]));

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