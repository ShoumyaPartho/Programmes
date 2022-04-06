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

bool check(int k, int *ara, int n, int *num) {
	for (int i = 1; i <= n; i++) {
		if (not num[ara[i]^k])
			return false;
	}
	return true;
}

void solve() {
	int tc; cin >> tc;
	while (tc--) {
		int n; cin >> n; int ara[n + 1], num[1030] = {0}, flag = 0, ans = 0;
		for (int i = 1; i <= n; i++) {
			cin >> ara[i];
			num[ara[i]] = 1;
		}
		for (int i = 1; i < 1024; i++) {
			if (check(i, ara, n, num)) {
				cout << i << endl;
				flag = 1;
				break;
			}
		}
		if (not flag) cout << "-1\n";
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