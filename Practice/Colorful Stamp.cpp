// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<string>
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
	int tc, n, flag, cnt; cin >> tc;

	while (tc--) {
		cin >> n;
		string s; cin >> s;

		flag = 1;

		for (int i = 0; i < n; i++) {
			if ((s[i] == 'B') or (s[i] == 'R')) {
				flag = 0;
				cnt = 1;

				for (int j = i + 1; j < n; j++) {
					if (s[j] == 'W') {
						if (cnt >= 2)
							flag = 1;
						else
							flag = 0;
						i = j - 1;
						break;
					}

					else if (s[j] != s[j - 1]) {
						cnt++;
						i = j;
					}

					if (j == n - 1) {
						if (cnt >= 2)
							flag = 1;
						else
							flag = 0;

						i = j;
						break;
					}
				}

				if (not flag)
					break;
			}
		}

		cout << (flag ? "YES" : "NO") << endl;
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