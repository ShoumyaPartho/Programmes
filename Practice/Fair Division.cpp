// Solved by Shoumya

#include<iostream>
#include<ctime>
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
	int tc, n, one, two, x, total; cin >> tc;
	while (tc--) {
		cin >> n; one = two = 0;
		for (int i = 0; i < n; i++) {
			cin >> x;
			if (x == 1) one++;
			else two++;
		}
		total = one + (two * 2);
		if (total % 2) {cout << "No\n"; continue;}
		if ((total >> 1) % 2) {
			if (one >= 2) cout << "YES\n";
			else cout << "NO\n";
		}
		else cout << "YES\n";
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