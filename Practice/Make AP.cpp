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
	ll tc, a, b, c, flag, temp; cin >> tc;

	while (tc--) {
		cin >> a >> b >> c; flag = 0;

		temp = b - a; temp = b + temp;
		if (temp % c == 0 and (temp / c) > 0) {
			cout << "YES" << endl;
			continue;
		}

		temp = c - b; temp = b - temp;
		if (temp % a == 0 and (temp / a) > 0) {
			cout << "YES" << endl;
			continue;
		}

		temp = c - a;

		if (temp & 1ll) {
			cout << "NO" << endl;
			continue;
		}

		temp = a + (temp >> 1);
		if (temp % b == 0 and (temp / b) > 0) {
			cout << "YES" << endl;
			continue;
		}

		cout << "NO" << endl;
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