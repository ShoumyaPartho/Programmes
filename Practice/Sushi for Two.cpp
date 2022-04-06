#include<iostream>
#include<ctime>
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
	int n, ans = 0, cnt = 0, prevCnt = -1, curItem, altItem; cin >> n; int sushi[n + 10];
	for (int i = 1; i <= n; i++) cin >> sushi[i];
	curItem = sushi[1];
	for (int i = 1; i <= n; i++) {
		if (sushi[i] == curItem) {
			cnt++;

			if (i == n and prevCnt != -1) {
				ans = max(ans, min(cnt, prevCnt) * 2);
				prevCnt = cnt;
				cnt = 1;
			}
		}
		else {
			curItem = sushi[i];
			if (prevCnt != -1) {
				ans = max(ans, min(cnt, prevCnt) * 2);
				prevCnt = cnt;
				cnt = 1;
			}
			else {
				prevCnt = cnt;
				cnt = 1;

				if (i == n and prevCnt != -1) {
					ans = max(ans, min(cnt, prevCnt) * 2);
					prevCnt = cnt;
					cnt = 1;
				}
			}
		}
	}
	cout << ans << endl;
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