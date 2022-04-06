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

	int tc, a, b; cin >> tc;

	while (tc--) {

		cin >> a >> b;

		if (a + b < 3)
			cout << 1 << endl;

		else if ((a + b) >= 3 and (a + b) <= 10)
			cout << 2 << endl;

		else if ((a + b) >= 11 and (a + b) <= 60)
			cout << 3 << endl;

		else
			cout << 4 << endl;
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