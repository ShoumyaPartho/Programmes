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

bool checkPrime(ll n) {
	if (n % 2ll == 0ll)
		return false;

	for (ll i = 3; i * i <= n; i += 2) {
		if (n % i == 0)
			return false;
	}

	return true;
}

void solve() {
	ll tc, n, sum, oddIdx; cin >> tc;

	while (tc--) {
		cin >> n; sum = 0;
		vector<ll> ara(n + 1, 0);
		bool isPrime;

		for (int i = 1; i <= n; i++) {
			cin >> ara[i];
			sum += ara[i];

			if (ara[i] & 1ll)
				oddIdx = i;
		}

		isPrime = checkPrime(sum);

		if (not isPrime) {
			cout << n << endl;

			for (int i = 1; i <= n; i++)
				cout << i << " \n"[i == n];
		}

		else {
			cout << n - 1 << endl;

			for (int i = 1; i <= n; i++) {
				if (i == oddIdx) {
					if (i == n)
						cout << endl;

					continue;
				}

				cout << i;

				cout << (i == n ? endl : " ");
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
	clock_t stop = clock(); cout.precision(3);
	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}