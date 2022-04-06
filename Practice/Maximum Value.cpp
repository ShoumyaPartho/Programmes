#include<iostream>
#include<algorithm>
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
	int tc, n; cin >> tc;
	while (tc--) {
		cin >> n; int ara[n + 10];
		for (int i = 0; i < n; i++) cin >> ara[i];
		sort(ara, ara + n);
		long long int maxi1 = (1ll * ara[0] * ara[1]) + max(1ll * (ara[0] - ara[1]), 1ll * (ara[1] - ara[0]));
		long long int maxi2 = (1ll * ara[n - 1] * ara[n - 2]) + max(1ll * (ara[n - 1] - ara[n - 2]), 1ll *  (ara[n - 2] - ara[n - 1]));
		cout << max(maxi1, maxi2) << endl;
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