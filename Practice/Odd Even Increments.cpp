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
	int tc, n, odd1, odd2, even1, even2; cin >> tc;

	while (tc--) {
		cin >> n;

		vector<int> ara(n + 1, 0);

		for (int i = 1; i <= n; i++)
			cin >> ara[i];

		odd1 = odd2 = even1 = even2 = 1;

		for (int i = 1; i <= n; i += 2) {
			if (ara[i] % 2 == 0)
				odd1 = 0;

			if (ara[i] % 2 == 1)
				odd2 = 0;
		}

		for (int i = 2; i <= n; i += 2) {
			if (ara[i] % 2 == 0)
				even1 = 0;

			if (ara[i] % 2 == 1)
				even2 = 0;
		}

		if ((odd1 and even1) or (odd2 and even2) or (odd1 and even2) or (odd2 and even1))
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