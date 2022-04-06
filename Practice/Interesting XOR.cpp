#include<iostream>
#include<ctime>
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
	ll tc, c, p, a, pnt, b, ta, tb; cin >> tc;
	while (tc--) {
		cin >> c; pnt = 1ll, a = b = ta = tb = 0ll;
		for (ll i = 0; i < 32; i++) {
			if ((1ll << i) > c) {
				p = i;
				break;
			}
		}
		for (ll i = p - 1; i >= 0; i--) {
			if (i == (p - 1)) {
				a |= (1ll << i);
				continue;
			}

			if (c & (1ll << i)) {
				b |= (1ll << i);
			}
			else {
				a |= (1ll << i);
				b |= (1ll << i);
			}
		}
		cout << a*b << endl;
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