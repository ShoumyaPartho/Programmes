// Solved by: Shoumya

#include<iostream>
#include<cstdio>
#include<ctime>
#include<vector>
using namespace std;

#define endl "\n"
#define ll long long int

const int INF = 1e9 + 7;

void fastIO() {
	// ios_base::sync_with_stdio(false);
	// cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int tc, n, m, x, res;
	scanf("%d", &tc);

	while (tc--) {
		scanf("%d %d", &n, &m);

		vector<int> ara(n + 1, 0), right(n + 5, INF), left(n + 5, INF);

		for (int i = 1; i <= n; i++)
			scanf("%d", &ara[i]);


		for (int i = 1; i <= n; i++) {
			if (ara[i] == 1)
				right[i] = 0;

			else
				right[i] = min(right[i], 1 + right[i - 1]);
		}

		for (int i = n; i >= 1; i--) {
			if (ara[i] == 2)
				left[i] = 0;

			else
				left[i] = min(left[i], 1 + left[i + 1]);
		}

		for (int i = 1; i <= m; i++) {
			scanf("%d", &x);
			res = min(right[x], left[x]);

			if (x == 1)
				printf("0\n");

			else if (res == INF)
				printf("-1\n");

			else
				printf("%d\n", res);
		}
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