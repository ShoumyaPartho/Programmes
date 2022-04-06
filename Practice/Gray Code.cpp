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

void grayCode(int state, int n) {
	if (not n) {
		cout << endl;
		return;
	}

	int num = (1 << n) >> 1;

	if (state == 0) {
		for (int i = 1; i <= num; i++) {
			cout << 0;

			if (i <= (num) >> 1)
				grayCode(0, n - 1);

			else
				grayCode(1, n - 1);
		}

		for (int i = 1; i <= num; i++) {
			cout << 1;

			if (i <= (num) >> 1)
				grayCode(1, n - 1);

			else
				grayCode(0, n - 1);
		}
	}

	else if (state == 1) {
		for (int i = 1; i <= num; i++) {
			cout << 1;

			if (i <= (num) >> 1)
				grayCode(0, n - 1);

			else
				grayCode(1, n - 1);
		}

		for (int i = 1; i <= num; i++) {
			cout << 0;

			if (i <= (num) >> 1)
				grayCode(1, n - 1);

			else
				grayCode(0, n - 1);
		}
	}
}

void solve() {
	int n; cin >> n;

	grayCode(0, n);
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