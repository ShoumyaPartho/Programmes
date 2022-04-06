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

void towerOfHanoi(int n, int left, int middle, int right) {
	if (n == 1) {
		cout << left << " " << right << endl;
		return;
	}

	towerOfHanoi(n - 1, left, right, middle);
	cout << left << " " << right << endl;
	towerOfHanoi(n - 1, middle, left, right);
}

void solve() {
	int n; cin >> n;

	cout << (1 << n) - 1 << endl;

	towerOfHanoi(n, 1, 2, 3);
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