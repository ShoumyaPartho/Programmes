// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
int MOD = 1e9 + 7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int tc, n, d1, d2, ans, cnt; cin >> tc;

	while (tc--) {
		string s; cin >> n >> s; ans = 1, cnt = 0;

		for (int i = 0; i < n; i++) {
			if (s[i] >= 'a' and s[i] <= 'e') {
				d1 = s[i] - 'a';
				d2 = 'e' - s[i];

				if (d1 == d2)
					cnt++;
			}

			else if (s[i] >= 'e' and s[i] <= 'i') {
				d1 = s[i] - 'e';
				d2 = 'i' - s[i];

				if (d1 == d2)
					cnt++;
			}

			else if (s[i] >= 'i' and s[i] <= 'o') {
				d1 = s[i] - 'i';
				d2 = 'o' - s[i];

				if (d1 == d2)
					cnt++;
			}

			else if (s[i] >= 'o' and s[i] <= 'u') {
				d1 = s[i] - 'o';
				d2 = 'u' - s[i];

				if (d1 == d2)
					cnt++;
			}
		}

		for (int i = 1; i <= cnt; i++)
			ans = ((ans % MOD) * (2 % MOD)) % MOD;

		cout << (cnt == 0 ? 1 : ans) << endl;
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