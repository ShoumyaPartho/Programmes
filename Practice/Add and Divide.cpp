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
	int tc, A, B, res, ans, temp;
	cin >> tc;
	while (tc--) {
		cin >> A >> B;
		ans = A + 5;

		for (int i = (B < 2 ? 2 - B : 0); i < ans; i++) {
			res = i, temp = A;
			while (temp) {
				temp /= (B + i);
				res++;
			}
			ans = min(res, ans);
		}
		cout << ans << "\n";
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