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
	int tc, n, r, b, extra, amount; cin >> tc;

	while (tc--) {
		cin >> n >> r >> b;
		amount = r / (b + 1);
		extra = r - (amount * (b + 1));

		while (1) {
			if (not r) {
				cout << endl;
				break;
			}

			for (int i = 1; i <= amount; i++) {
				if (r) {
					cout << 'R';
					r--;
				}

				else
					break;
			}

			if (extra) {
				cout << 'R';
				extra--;
				r--;
			}

			if (b) {
				cout << 'B';
				b--;
			}
		}
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