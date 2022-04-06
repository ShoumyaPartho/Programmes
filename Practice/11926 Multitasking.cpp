#include<iostream>
#include<ctime>
#include<cstdio>
using namespace std;

#define endl "\n"
#define ll long long int
const int MAX = 1e6 + 10;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int n, m, x, y, flag, rep, task[MAX];
	while (scanf("%d %d", &n, &m)) {
		if (!n and !m) break;
		for (int i = 0; i < MAX; i++) task[i] = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d %d", &x, &y);
			task[x]++; task[y]--;
		}
		for (int i = 0; i < m; i++) {
			scanf("%d %d %d", &x, &y, &rep);
			for (int j = 0; (j + x) < MAX - 5; j += rep) task[j + x]++, task[min(j + y, MAX - 5)]--;
		}
		for (int i = 1; i < MAX; i++) task[i] += task[i - 1];
		flag = 1;
		for (int i = 0; i < MAX - 5; i++) {
			if (task[i] > 1) {
				flag = 0; break;
			}
		}
		flag ? printf("NO CONFLICT\n") : printf("CONFLICT\n");
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