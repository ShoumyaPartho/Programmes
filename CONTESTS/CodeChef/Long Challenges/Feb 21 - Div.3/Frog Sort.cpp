#include<iostream>
#include<ctime>
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {

	int tc, n, ara[30], l[30], nPos[30], reqNum, reqPos, currPos, step, idx; cin >> tc;
	while (tc--) {
		cin >> n;
		step = 0;
		for (int i = 0; i < 30; i++) ara[i] = l[i] = nPos[i] = 0;
		for (int i = 1; i <= n; i++) {
			cin >> ara[i];
			if (ara[i] == 1) reqPos = i, nPos[i] = 1;
		}
		for (int i = 1; i <= n; i++) cin >> l[i];

		for (int i = 2; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (ara[j] == i) {
					currPos = j;
					break;
				}
			}
			if (currPos > reqPos) {
				reqPos = currPos;
				continue;
			}
			idx = currPos;

			while (idx <= reqPos or nPos[idx] == 1) {
				idx += l[currPos];
				step++;
			}
			nPos[idx] = 1, reqPos = idx;
		}
		cout << step << "\n";
	}

}

int main() {
	fastIO();
	clock_t start = clock();

	solve();

	clock_t stop = clock(); cout.precision(10);
#ifndef ONLINE_JUDGE
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}