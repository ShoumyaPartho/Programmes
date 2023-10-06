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

ll getSum(ll num) {
	return (num * (num + 1) / 2);
}

void solve() {
	ll n, x, y, cntX, cntY, lcm, sumFirst, sumSecond; cin >> n >> x >> y;
	lcm = (x * y ) / __gcd(x, y); lcm = n / lcm;
	cntX = (n / x) , cntY = (n / y);

	sumFirst = getSum(n) - getSum(n - (cntX - lcm));
	sumSecond = getSum(cntY - lcm);

	cout << sumFirst - sumSecond << endl;
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