// Sovled by: Shoumya

#include<iostream>
#include<ctime>
using namespace std;

#define endl "\n"
#define ll long long int

const int MAX = 3e5 + 9;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {

	int dp[MAX], tc, n, k, x;

	for (int i = 0; i < MAX; i++)
		dp[i] = i + 1;

	for (int i = 1; i < MAX; i++) {
		for (int j = i; j < MAX; j += i)
			dp[j] = min(dp[j], i + j / i);
	}

	for (int i = 1; i < MAX; i++) {
		for (int j = 1; j * j <= i; j++)
			dp[i] = min(dp[i], dp[j] + dp[i - j]);
	}

	cin >> tc;

	while (tc--) {
		cin >> n >> k >> x;
		cout << (dp[k] <= n ? "YES\n" : "NO\n");
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