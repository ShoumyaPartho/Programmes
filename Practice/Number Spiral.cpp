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
	ll tc, row, col, x; cin >> tc;

	while (tc--) {
		cin >> row >> col;

		if ((col >= row) and (col & 1))
			x = (col * col) - row + 1;

		else if ((col >= row) and (not (col & 1)))
			x = (col - 1) * (col - 1) + row;

		else if ((row >= col) and (not (row & 1)))
			x = (row * row) - col + 1;

		else if ((row >= col) and (row & 1))
			x = (row - 1) * (row - 1) + col;

		cout << x << endl;
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