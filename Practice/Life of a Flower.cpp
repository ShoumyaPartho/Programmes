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
	int tc, n, height, dead; cin >> tc;

	while (tc--) {
		cin >> n; height = 1, dead = 0;
		vector<int> days(n + 5, 0);

		for (int i = 1; i <= n; i++)
			cin >> days[i];

		for (int i = 1; i <= n; i++) {
			if (days[i] == 1 and (i - 1 >= 1) and days[i - 1] == 1)
				height += 5;

			else if (days[i] == 0 and (i + 1 <= n) and days[i + 1] == 0) {
				dead = 1;
				break;
			}
			else if (days[i] == 1)
				height++;
		}

		cout << (dead ? -1 : height) << endl;
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