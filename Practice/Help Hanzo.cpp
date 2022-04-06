// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
using namespace std;

#define endl "\n"
#define ll long long int

const ll LIM = 1e6 + 1;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

vector<ll> check(LIM, 0) , primes;

void normalSieve() {

	primes.push_back(2ll);

	for (ll i = 2; i <= LIM; i += 2)
		check[i] = 1ll;

	for (ll i = 3; (i * i) <= LIM; i += 2) {
		if (check[i]) {
			for (ll j = i * i; j <= LIM; j += (2 * i))
				check[j] = 1;
		}
	}

	for (ll i = 3; i <= LIM; i += 2) {
		if (not check[i])
			primes.push_back(i);
	}
}

ll segSieve(ll a, ll b) {

	if (b < 2)
		return 0ll;

	if (a == 1)
		a++;

	check.clear();
	check.assign(LIM, 0ll);

	ll  cnt = 0;

	for (ll i = 0; i < primes.size() and (primes[i]*primes[i]) <= b; i++) {
		ll p = primes[i] * primes[i];

		if (p < a)
			p = ((a + primes[i] - 1) / primes[i]) * primes[i];

		for (; p <= b; p += primes[i])
			check[p - a] = 1;
	}

	for (int i = a; i <= b; i++) {
		if (not check[i - a])
			cnt++;
	}

	return cnt;
}

void solve() {

	normalSieve();

	ll tc, t, a, b, ans; cin >> t;

	for (tc = 1; tc <= t; tc++) {

		cin >> a >> b;

		ans = segSieve(a, b);

		cout << "Case " << tc << ": " << ans << endl;
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