#include<iostream>
#include<ctime>
#include<cstdio>
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
	int tc, n, cnt = 0;
	while (scanf("%d", &n) == 1 and n) {
		int dif[n], y[n], a[n], b[n], maxYVal = 0, i; printf("Case #%d:\n", ++cnt);

		for (i = 0; i < n; i++) {
			scanf("%d %d %d", &y[i], &a[i], &b[i]);
			dif[i] = b[i] - a[i];
			if (y[i] > maxYVal) maxYVal = y[i];
		}

		for (; maxYVal < 10000; maxYVal++) {
			for (i = 0; i < n; i++) {
				if ((maxYVal - y[i]) % dif[i] != 0) break; // Important use of MOD operator
			}
			if (i == n) break;
		}
		if (maxYVal == 10000) puts("Unknown bugs detected.\n");
		else printf("The actual year is %d.\n\n", maxYVal);
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