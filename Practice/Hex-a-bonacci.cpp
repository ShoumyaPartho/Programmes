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
	ll t, tc, ara[50000], n; cin >> t;
	for (tc = 1; tc <= t; tc++) {
		cin >> ara[1] >> ara[2] >> ara[3] >> ara[4] >> ara[5] >> ara[6] >> n;
		for (ll j = 7; j <= (n + 1); j++) ara[j] = (ara[j - 1] + ara[j - 2] + ara[j - 3] + ara[j - 4] + ara[j - 5] + ara[j - 6]) % 10000007ll;
		cout << "Case " << tc << ": " << ara[n + 1] % 10000007ll << endl;
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