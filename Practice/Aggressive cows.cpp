#include<iostream>
#include<ctime>
#include<algorithm>
using namespace std;

#define endl "\n"
#define ll long long int
const int MAX = 1e9 + 5;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

bool check(int dif, int *stalls, int n, int c) {
	int cnt = 0, last = -MAX;
	for (int i = 0; i < n; i++) {
		if ((stalls[i] - last) >= dif) cnt++, last = stalls[i];
	}
	return cnt >= c;
}

void solve() {
	int tc, n, c; cin >> tc;
	while (tc--) {
		cin >> n >> c; int stalls[n + 5];
		for (int i = 0; i < n; i++) cin >> stalls[i];
		sort(stalls, stalls + n);

		int low = 0, high = MAX, mid, ans = 1;

		while (low <= high) {
			mid = (low + high) >> 1;

			if (check(mid, stalls, n, c)) {
				ans = mid;
				low = mid + 1;
			}
			else
				high = mid - 1;
		}
		cout << ans << endl;
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