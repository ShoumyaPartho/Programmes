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
	int tc, n; cin >> tc;
	while (tc--) {
		cin >> n;
		int aara[n], bara[n], mn1 = -1, zr = -1, pl1 = -1, mnIdx = -1, zrIdx = -1, plIdx = -1, posble = 1;
		for (int i = 0; i < n; i++) {
			cin >> aara[i];
			if (aara[i] == -1 and mn1 == -1) {
				mn1 = 1, mnIdx = i;
			}
			else if (aara[i] == 0 and zr == -1) {
				zr = 1, zrIdx = i;
			}
			else if (aara[i] == 1 and pl1 == -1) {
				pl1 = 1, plIdx = i;
			}
		}

		for (int i = 0; i < n; i++) {
			cin >> bara[i];
			if (bara[i] < aara[i] and !(mnIdx < i and mn1 != -1)) posble = 0;
			else if ( bara[i] > aara[i] and !(plIdx < i and pl1 != -1)) posble = 0;
		}
		cout << (posble == 0 ? "NO\n" : "YES\n");
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Writhe code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}