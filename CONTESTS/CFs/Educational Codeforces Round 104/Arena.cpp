#include<iostream>
#include<ctime>
#include<algorithm>
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
	int tc, n, mini, cnt; cin >> tc;
	while (tc--) {
		cin >> n;
		int ara[n];
		for (int i = 0; i < n; i++) cin >> ara[i];
		sort(ara, ara + n);
		mini = ara[0], cnt = 0;

		for (int i = 1; i < n; i++) {
			if (ara[i] > mini) {
				cnt = n - i;
				break;
			}
		}
		cout << cnt << "\n";
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