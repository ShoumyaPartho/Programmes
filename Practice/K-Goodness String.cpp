#include<iostream>
#include<ctime>
#include<string>
using namespace std;

#define endl "\n"
#define ll long long int

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int tc, t, n, k, cnt; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cin >> n >> k; cnt = 0; string s; cin >> s; s = "-" + s;

		for (int j = 1; j <= (n / 2); j++) {
			if (s[j] != s[n - j + 1]) cnt++;
		}
		if (cnt == k) cnt = 0;
		else if (cnt > k) cnt = cnt - k;
		else cnt = k - cnt;
		cout << "Case #" << tc << ": " << cnt << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	// cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}