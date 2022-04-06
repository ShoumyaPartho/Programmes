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

void check(int *ara, int i, int n, int sum, int &flag) {
	// base case
	if (i == (n + 1)) {
		if (sum == 0) {
			cout << "YES\n";
			flag = 1;
		}
		return;
	}

	// self work
	int temp = ( sum + ara[i] ) % 360;

	// recursion call
	if (not flag) check(ara, i + 1, n, temp, flag);

	// self work
	temp = (sum - ara[i] + 360) % 360;

	// recursion call
	if (not flag) check(ara, i + 1, n, temp, flag);
	// cout << sum << endl;

	return;
}

void solve() {
	int n, flag = 0; cin >> n; int ara[n + 1];
	for (int i = 1; i <= n; i++) cin >> ara[i];
	check(ara, 1, n, 0, flag);
	if (not flag) cout << "NO\n";
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