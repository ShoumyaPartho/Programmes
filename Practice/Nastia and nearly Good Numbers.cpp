// Solved by: Shoumya

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
	ll tc, a, b, x, y, z, i; cin >> tc;

	while (tc--) {

		cin >> a >> b;

		if (b == 1) {
			cout << "NO\n";
			continue;
		}

		cout << "YES\n";

		x = a;
		y = (a * b);
		z = x + y;
		cout << x << " " << y << " " << z << endl;
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