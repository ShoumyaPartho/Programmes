#include<iostream>
#include<ctime>
#include<cmath>
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
	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		ll s, sqrtn1, sqrtn2, row, col; cin >> s;
		sqrtn1 = sqrt(s); sqrtn2 = sqrtn1 + 1;
		if (sqrtn1 % 2 == 1) {
			if (sqrtn1 * sqrtn1 == s) row = sqrtn1, col = 1;
			else if (s - (sqrtn1 * sqrtn1) <= (sqrtn1 + 1)) row = sqrtn1 + 1, col = s - (sqrtn1 * sqrtn1);
			else col = sqrtn2, row = (sqrtn2 * sqrtn2) - s + 1;
			swap(row, col);
			cout << "Case " << tc << ": " << row << " " << col << endl;
		}
		else {
			if (sqrtn1 * sqrtn1 == s) col = sqrtn1, row = 1;
			else if (s - (sqrtn1 * sqrtn1) <= sqrtn1 + 1) col = sqrtn1 + 1, row = s - (sqrtn1 * sqrtn1);
			else row = sqrtn2, col = (sqrtn2 * sqrtn2) - s + 1;
			swap(row, col);
			cout << "Case " << tc << ": " << row << " " << col << endl;
		}
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