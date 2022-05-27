// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
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
	int tc, n, final, cnt, cur; cin >> tc;

	while (tc--) {
		cin >> n; final = -1, cnt = 0, cur = -1;
		vector<int> ara(n + 1, 0);

		for (int i = 1; i <= n; i++) {
			cin >> ara[i];
			final &= ara[i];
		}

		for (int i = 1; i <= n; i++) {
			cur &= ara[i];
			if (cur == final) {
				cnt++;
				cur = -1;
			}
		}

		cout << n - cnt << endl;
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(3);
	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}