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
	ll tc, n, temp; cin >> tc;

	while (tc--) {
		cin >> n;

		if (n <= 6)
			cout << 15 << endl;

		else if (n <= 8)
			cout << 20 << endl;

		else if (n <= 10)
			cout << 25 << endl;

		else if (n % 6 == 0)
			cout << (n / 6ll) * 15ll << endl;

		else if (n % 6 <= 2) {
			temp = n / 6;
			temp--;
			cout << (temp * 15) + 20ll << endl;
		}

		else if (n % 6 <= 4) {
			temp = n / 6;
			temp--;
			cout << (temp * 15) + 25ll << endl;
		}

		else {
			temp = n / 6;
			temp++;
			cout << (temp * 15ll) << endl;
		}
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