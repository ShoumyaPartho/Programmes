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
	long long int tc, n, tStack, sum; cin >> tc;
	while (tc--) {
		cin >> n;
		sum = tStack = 0;
		int ara[n], flag = 1;
		for (int i = 0; i < n; i++) {
			cin >> ara[i];
			sum += i;
			tStack += ara[i];
			if (tStack < sum) {
				flag = 0;
			}
		}
		cout << (flag ? "YES\n" : "NO\n");
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