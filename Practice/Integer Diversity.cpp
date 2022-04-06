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
	int tc, n, x, cnt; cin >> tc;

	while (tc--) {
		cin >> n; cnt = 0;
		vector<int> pos(2 * n + 10, 0);

		for (int i = 1; i <= n; i++) {
			cin >> x;
			if (x > 0) {
				if (not pos[x])
					pos[x]++, cnt++;

				else if (not pos[n + x])
					pos[n + x]++, cnt++;
			}

			else if (x < 0) {
				if (not pos[n + (-x)])
					pos[n + (-x)]++, cnt++;

				else if (not pos[(-x)])
					pos[(-x)]++, cnt++;
			}

			else if (x == 0) {
				if (not pos[x])
					pos[x]++, cnt++;
			}
		}

		cout << cnt << endl;
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