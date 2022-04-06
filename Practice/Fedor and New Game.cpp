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
	ll n, m, k, dif, frnd = 0ll, temp; cin >> n >> m >> k; ll ara[m + 5ll];
	for (ll i = 0; i <= m; i++) cin >> ara[i];
	for (ll i = 0; i < m; i++) {
		temp = ara[i] ^ ara[m]; dif = 0;
		for (ll j = 0; (1ll << j) <= temp; j++) {
			if ((1ll << j) & temp) dif++;
		}
		if (dif <= k) frnd++;
	}
	cout << frnd << endl;
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