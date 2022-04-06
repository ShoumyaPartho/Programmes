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

void printUps(int i, int c) {
	for (int k = i; k <= c; k++)
		cout << "+-";
	cout << "+" << endl;
}

void printChars(int i, int c) {
	for (int k = i; k <= c; k++)
		cout << "|.";
	cout << "|" << endl;
}

void solve() {
	ll tc, t, r, c; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cout << "Case #" << tc << ":" << endl;;
		cin >> r >> c;

		for (int i = 1; i <= r; i++) {
			if (i == 1) {
				cout << "..";
				printUps(2, c);
				cout << "..";
				printChars(2, c);
				continue;
			}

			printUps(1, c);
			printChars(1, c);

			if (i == r)
				printUps(1, c);
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