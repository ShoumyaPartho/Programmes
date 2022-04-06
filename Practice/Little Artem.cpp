#include<iostream>
#include<ctime>
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int tc, n, m; cin >> tc;
	while (tc--) {
		cin >> n >> m;
		cout << "W";
		for (int i = 1; i < m; i++) cout << "B";
		cout << "\n";
		for (int i = 1; i < n; i++) {
			for (int j = 0; j < m; j++) cout << "B";
			cout << "\n";
		}
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Writhe code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}