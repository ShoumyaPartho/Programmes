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
	int tc, n, maxEven, flag, req; cin >> tc;
	ll toGive;

	while (tc--) {
		cin >> n;
		vector<int> ara(n + 1, 0);
		maxEven = -1, toGive = 0, flag = 1;

		for (int i = 1; i <= n; i++) {
			cin >> ara[i];

			if (ara[i] % 2 == 0)
				maxEven = max(maxEven, ara[i]);

			if (ara[i] % 2 == 1)
				toGive += ara[i] - 1;
		}

		if (n == 2) {
			cout << "YES" << endl;
			continue;
		}

		for (int i = 1; i <= n; i++) {
			if (ara[i] % 2 == 0) {
				req = maxEven - ara[i];

				if (req > toGive) {
					flag = 0;
					break;
				}

				toGive -= req;
			}
		}

		if (flag and (toGive % n))
			flag = 0;

		cout << (flag ? "YES" : "NO") << endl;
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