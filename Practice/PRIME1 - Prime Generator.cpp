// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<cstring>
using namespace std;

#define endl "\n"
#define ll long long int

const int LIM = 1e5 + 1;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

vector<int> check(LIM, 0), primes, segPrimes;

void normalSieve() {

	primes.push_back(2);

	for (int i = 4; i <= LIM; i += 2)
		check[i] = 1;

	for (int i = 3; (i * i) <= LIM; i += 2) {
		if (not check[i]) {

			for (int j = i * i; j <= LIM; j += (2 * i))
				check[j] = 1;
		}
	}

	for (int i = 3; i <= LIM; i += 2) {
		if (not check[i])
			primes.push_back(i);
	}
}

void segSieve(ll m, ll n) {

	if (n < 2)
		return;

	check.clear();
	check.assign(LIM + 1, 0);

	if (m == 1)
		m++;

	for (int i = 0; i < primes.size() and (primes[i]*primes[i]) <= n; i++) {

		ll p = primes[i] * primes[i];

		if (p < m)
			p = ((m + primes[i] - 1) / primes[i]) * primes[i];

		for (; p <= n; p += primes[i])
			check[p - m] = 1;
	}

	for (int i = m; i <= n; i++) {
		if (not check[i - m])
			segPrimes.push_back(i);
	}

}

void solve() {

	normalSieve();

	ll tc, m, n, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cin >> m >> n; segPrimes.clear();
		segSieve(m, n);

		if (segPrimes.size() == 0)
			cout << endl;

		for (auto x : segPrimes)
			cout << x << endl;

		if (tc < t)
			cout << endl;
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