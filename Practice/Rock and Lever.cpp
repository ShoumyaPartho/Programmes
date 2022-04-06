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
	ll tc, n; cin >> tc;
	while (tc--) {
		cin >> n; ll ara[n + 1], cnt, ans = 0ll;
		for (ll i = 0ll; i < n; i++) cin >> ara[i];

		for (ll j = 32; j >= 0; j--) {
			cnt = 0ll;
			for (ll i = 0; i < n; i++) {
				if ((ara[i] >= (1ll << j)) and (ara[i] < (1ll << (j + 1ll))))
					cnt++;
			}
			ans += (cnt * (cnt - 1) / 2ll);
		}
		cout << ans << endl;
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