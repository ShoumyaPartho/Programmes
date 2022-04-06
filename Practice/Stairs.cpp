// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<map>
using namespace std;

#define endl "\n"
#define ll long long int

const ll MAX = 1e18 + 2;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

ll getAmount(ll i) {

	ll tot = (1ll << i) - 1ll;
	tot = tot * (tot + 1) / 2ll;

	return tot;
}

void solve() {

	ll tc, x, n, cnt; map<ll, ll> mp;

	for (ll i = 1; i <= 31; i++) {
		n = getAmount(i);
		mp[i] = n;
	}

	cin >> tc;

	while (tc--) {

		cin >> x; cnt = 0;

		for (int i = 1; i <= 31; i++) {
			n = mp[i];

			if (x >= n) {
				cnt++;
				x -= n;
			}

			else
				break;
		}

		cout << cnt << endl;
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