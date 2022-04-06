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
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int tc, n, m, ans; cin >> tc;
	while (tc--) {
		string a, b;
		cin >> a >> b; n = a.size(); m = b.size(), ans = 0;

		for (int len = 1; len <= min(n, m); len++) {
			for (int i = 0; i + len <= n; i++) {
				for (int j = 0; j + len <= m; j++) {
					if (a.substr(i, len) == b.substr(j, len))
						ans = max(ans, len);
				}
			}
		}
		cout << n + m - (2 * ans) << endl;
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