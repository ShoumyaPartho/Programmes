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

const ll MAX = 1e6;

ll primes[MAX + 10];

void calc() {
	for (int i = 0; i <= MAX; i++)
		primes[i] = 1 ;

	primes[0] = primes[1] = 0;
	for (ll j = 2 * 2; j <= MAX; j += 2)
		primes[j] = 0;

	for (ll i = 3; i <= MAX; i += 2) {
		if (primes[i]) {
			for (ll j = i * i; j <= MAX; j += i + i)
				primes[j] = 0;
		}
	}

	for (int i = 2; i <= MAX; i++)
		primes[i] += primes[i - 1];
}

void solve() {
	int n, m; cin >> n >> m;
	cout << primes[m] - primes[n - 1] << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;
	calc();

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}