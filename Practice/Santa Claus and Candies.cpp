// Solved by: Shoumya

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

	int n, temp, cnt = 0; cin >> n; temp = n;

	for (int i = 1;; i++) {

		if (temp - i >= 0)
			cnt++, temp -= i;

		else
			break;
	}

	temp = n; cout << cnt << endl;

	for (int i = 1; i < cnt; i++) {
		cout << i << " ";
		temp -= i;
	}

	cout << temp << endl;
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