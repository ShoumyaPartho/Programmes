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
	long long int tc, a, b, x, y, k; cin >> tc;
	while (tc--) {
		cin >> a >> b >> k;
		long long int boys[a + 1] = {0}, girls[b + 1] = {0}, sum = 0, res = 0;
		for (int i = 0; i < k; i++) {
			cin >> x;
			boys[x]++;
			sum++;
		}
		for (int i = 1; i <= a; i++) {
			res += boys[i] * (sum - boys[i]);
		}
		res /= 2;
		for (int i = 0; i < k; i++) {
			cin >> y;
			girls[y]++;
		}
		for (int i = 1; i <= b; i++) {
			res -= ((girls[i] * (girls[i] - 1)) / 2);
		}
		cout << res << endl;
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