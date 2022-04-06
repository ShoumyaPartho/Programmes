// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
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
	int tc, n, ans, cur; cin >> tc;

	while (tc--) {
		cin >> n; ans = 0, cur = -1;
		vector<int> num(n + 10, 0), maxiAra(n + 10, 0);

		for (int i = 1; i <= n; i++)
			cin >> num[i];

		for (int i = n; i; i--)
			maxiAra[i] = max(maxiAra[i + 1], num[i]);

		for (int i = n; i; i--) {
			if (num[i] == maxiAra[i]) {
				if (cur == -1) {
					cur = num[i];
					ans++;
				}

				else if (cur < maxiAra[i]) {
					cur = num[i];
					ans++;
				}
			}
		}

		cout << ans - 1 << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(3);
	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}