// Solved by: Shoumya

#include<bits/stdc++.h>
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

vector<int> getPrimes() {
	int lim = 250;
	vector<int> primes, nums(lim, 1);
	primes.push_back(2);

	for (int i = 3; i < lim; i += 2) {
		if (nums[i]) {
			primes.push_back(i);

			for (int j = i + i; j < lim; j += i)
				nums[j] = 0;
		}
	}

	return primes;
}

void solve() {
	vector<int> primes(getPrimes());
	int n; cin >> n;

	if (n == 1)
		cout << -1 << endl;

	else if (n % 2 == 0)
		cout << n / 2 << " " << n / 2 << endl;

	else {
		for (auto x : primes) {
			if (n % x == 0) {
				cout << n / x << " " << n - (n / x) << endl;
				return;
			}
		}
		cout << 1 << " " << n - 1 << endl;
	}
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}