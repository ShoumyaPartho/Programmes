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
	ll tc, D, d, P, Q, temp, rem, ans; cin >> tc;

	while (tc--) {
		cin >> D >> d >> P >> Q;

		temp = (D + d - 1) / d ; // Taking ceil.

		temp--; // To take sum until this nth element

		ans  = temp * ((2 * P) + (temp - 1) * Q) / 2 * d; // Taking Element

		ans += ((P + Q * temp) * (D - (temp * d))); // Taking remaining sum

		cout << ans << endl;
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