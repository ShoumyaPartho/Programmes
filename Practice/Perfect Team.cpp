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
	ll tc, c, m, x, ans; cin >> tc;
	while (tc--) {
		cin >> c >> m >> x; ans = x;
		if (c <= x or m <= x) {
			cout << min(c, m) << endl;
			continue;
		}
		c -= x, m -= x;
		if (c == m) ans += (c + m) / 3;
		else if (c >= (m * 2)) ans += m;
		else if (m >= (c * 2)) ans += c;
		else ans += (c + m) / 3;
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