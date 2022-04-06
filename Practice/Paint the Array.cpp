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
	ll tc, n, gcdOdd, gcdEven, gcdTemp, flagEven, flagOdd; cin >> tc;

	while (tc--) {
		cin >> n;
		vector<ll> num(n + 1, 0);

		for (int i = 1; i <= n; i++)
			cin >> num[i];

		gcdOdd = num[1], gcdEven = num[2], flagOdd = 1, flagEven = 1;

		for (int i = 3; i <= n; i += 2)
			gcdOdd = __gcd(gcdOdd, num[i]);

		for (int i = 4; i <= n; i += 2)
			gcdEven = __gcd(gcdEven, num[i]);

		for (int i = 1; i <= n; i += 2) {
			if (num[i] % gcdEven == 0)
				flagOdd = 0;
		}

		for (int i = 2; i <= n; i += 2) {
			if (num[i] % gcdOdd == 0)
				flagEven = 0;
		}

		if (flagOdd and gcdEven)
			cout << gcdEven << endl;

		else if (flagEven)
			cout << gcdOdd << endl;

		else
			cout << 0 << endl;
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