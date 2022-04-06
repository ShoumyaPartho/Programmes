// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
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
	int tc, n; cin >> tc;

	while (tc--) {
		cin >> n;

		vector<int> ara(n + 1, 0);
		ll sum = 0, cnt = 0, mini;

		for (int i = 1; i <= n; i++) {
			cin >> ara[i];
			sum += ara[i];
		}

		if (sum % n) {
			cout << -1 << endl;
			continue;
		}

		if (n == 1) {
			cout << 0 << endl;
			continue;
		}

		mini = sum / n;

		for (int i = 1; i <= n; i++) {
			if (ara[i] > mini)
				cnt++;
		}

		cout << cnt << endl;
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