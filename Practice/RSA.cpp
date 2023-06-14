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

ll bigMod(ll a, ll p, ll m) {
	if (p == 0)
		return 1;

	if (p == 1)
		return a % m;

	ll temp = bigMod(a, p / 2, m);
	temp = ((temp % m) * (temp % m)) % m;

	if (p % 2)
		temp = ((temp % m) * (a % m)) % m;

	return temp;
}

ll invMod(ll a, ll b) {
	ll res = a % b;

	for (int i = 1; i < b; i++) {
		ll t = ((a % b) * (i % b)) % b;

		if (t == 1)
			return i;
	}
}

void RSAenc() {
	ll p = 101, q = 103, enc, dec;
	ll n = p * q, m = (p - 1) * (q - 1), a, x = 500;

	for (ll i = 2; i < m; i++) {
		if ( __gcd(i, m) == 1) {
			a = i;
			break;
		}
	}
	ll b = invMod(a, m);

	enc = bigMod(x, a, n);
	dec = bigMod(enc, b, n);

	cout << "Message = " << x << " , Enc = " << enc << " , Dec = " << dec << endl;
}

void RSAsign() {
	ll p = 101, q = 103, sign, ver;
	ll n = p * q, m = (p - 1) * (q - 1), a, x = 500;

	for (ll i = 2; i < m; i++) {
		if ( __gcd(i, m) == 1) {
			a = i;
			break;
		}
	}
	ll b = invMod(a, m);

	sign = bigMod(x, b, n);
	ver = bigMod(sign, a, n);

	cout << "Message = " << x << " , Ver = " << ver << endl;
}

void solve() {
	// RSAenc();

	RSAsign();
}

int main() {
	fastIO();

	solve();

	return 0;
}