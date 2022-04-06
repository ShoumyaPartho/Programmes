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
	ll tc, t, n, dogFood, catFood, m, dogCnt, flag; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cin >> n >> dogFood >> catFood >> m; flag = 1;
		string line; cin >> line;
		cout << "Case #" << tc << ": ";

		dogCnt = count(line.begin(), line.end(), 'D');

		if (dogCnt > dogFood) {
			cout << "NO" << endl;
			continue;
		}

		else if (dogCnt == 0) {
			cout << "YES" << endl;
			continue;
		}

		for (int i = 0; i < line.size(); i++) {
			if (line[i] == 'D') {
				dogCnt--;
				dogFood--;

				if (not dogCnt)
					break;

				else if (dogCnt and (not dogFood)) {
					flag = 0;
					break;
				}

				catFood += m;
			}

			else if (line[i] == 'C') {
				catFood--;

				if (catFood < 0) {
					flag = 0;
					break;
				}

				if ((not catFood) and  (i + 1 < n) and (line[i + 1] == 'C') and dogCnt) {
					flag = 0;
					break;
				}
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