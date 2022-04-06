// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
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
	ll tc, a, b; cin >> tc;

	while (tc--) {
		cin >> a >> b;

		double num = (double) (a / b), low = 0, high = 1, mid;
		bool check = false;

		while (low <= high) {
			mid = (low + high) / 2.0;

			if (mid == num) {
				check = true;
				break;
			}

			else if (num < mid)
				high = mid;

			else
				low = mid;
		}

		cout << (check ? "YES" : "NO") << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}