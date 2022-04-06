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
	int tc, t, lenI, lenP, i, j, flag, cnt; cin >> t;
	string I, P;

	for (tc = 1; tc <= t; tc++) {
		cin >> I >> P;
		lenI = I.length();
		lenP = P.length();
		i = j = cnt = 0;
		flag = 1;

		while (1) {
			if (i == lenI) {
				if (j != lenP)
					cnt += (lenP - j);
				break;
			}

			if (j == lenP) {
				flag = 0;
				break;
			}

			if (I[i] == P[j]) {
				i++;
				j++;
				continue;
			}

			if (I[i] != P[j]) {
				j++;
				cnt++;
			}

			if (j == lenP) {
				flag = 0;
				break;
			}
		}

		cout << "Case #" << tc << ": ";
		if (flag)
			cout << cnt << endl;

		else
			cout << "IMPOSSIBLE" << endl;
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