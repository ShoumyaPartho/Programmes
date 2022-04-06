#include<iostream>
#include<ctime>
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

ll sumOfDigits(ll n) {
	ll sum = 0, temp;
	while (n) {
		temp = n % 10;
		sum += temp;
		n /= 10;
	}
	return sum;
}

void solve() {
	ll tc, n, gcd; cin >> tc;
	while (tc--) {
		cin >> n;
		for (;; n++) {
			gcd = __gcd(n, sumOfDigits(n));
			if (gcd > 1) {
				cout << n << endl;
				break;
			}
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