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

ll getFactSum(ll num) {
	ll sum = 0;

	while (num % 2 == 0) {
		num /= 2;
		sum += 2;
	}

	for (int i = 3; i <= sqrt(num); i += 2) {
		while (num % i == 0) {
			num /= i;
			sum += i;
		}
	}

	if (num > 1)
		sum += num;

	return sum;
}

void solve() {
	ll n, q, u, v, gcd; cin >> n >> q;

	while (q--) {
		cin >> u >> v;
		gcd = __gcd(u, v);
		cout << getFactSum(u / gcd) + getFactSum(v / gcd) << endl;
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