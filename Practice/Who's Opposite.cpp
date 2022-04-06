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
	ll tc, a, b, c, first, mid, maxi; cin >> tc;

	while (tc--) {
		cin >> a >> b >> c;

		if (a > b)
			swap(a, b);

		if ((a * 2ll) > b) {
			cout << -1 << endl;
			continue;
		}

		first = 1; mid = b - (a - 1); maxi = (mid - 1) * 2;

		if (c > maxi) {
			cout << -1 << endl;
			continue;
		}

		if (c < mid)
			cout << mid + c - 1 << endl;

		else
			cout << 1 + c - mid << endl;
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