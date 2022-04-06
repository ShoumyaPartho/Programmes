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
	int tc, n, minVal, ans, allSame; cin >> tc;

	while (tc--) {
		cin >> n; vector<int> ara(n + 1, 0); cin >> ara[1]; allSame = 1;
		minVal = ara[1];

		for (int i = 2; i <= n; i++) {
			cin >> ara[i];
			minVal = min(minVal, ara[i]);
		}

		for (int i = 2; i <= n; i++) {
			if (ara[1] != ara[i]) {
				allSame = 0;
				break;
			}
		}

		if (allSame) {
			cout << -1 << endl;
			continue;
		}

		ans = abs(ara[1] - minVal);

		for (int i = 2; i <= n; i++)
			ans = __gcd(ans, ara[i] - minVal);

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