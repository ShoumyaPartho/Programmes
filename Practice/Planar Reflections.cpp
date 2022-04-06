// Solved by Shoumya

#include<iostream>
#include<ctime>
#include<cstring>
using namespace std;

#define endl "\n"
#define ll long long int

const int N = 1001, K = 1001, mod = 1e9 + 7;
int dp[N][K][2];

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int recursiveDP(int curr, int k, int dir, const int &n) {
	//Base Case
	if (k == 1) return k;

	if (dp[curr][k][dir] != -1) return dp[curr][k][dir];

	int ans = 2;

	// Recursive Assumption
	if (dir == 1) {
		if (curr < n) ans += recursiveDP(curr + 1, k, dir, n) - 1;
		ans %= mod;
		if (curr > 1) ans += recursiveDP(curr - 1, k - 1, 1 - dir, n) - 1;
		ans %= mod;
	}

	else if (dir == 0) {
		if (curr < n) ans += recursiveDP(curr + 1, k - 1, 1 - dir, n) - 1;
		ans %= mod;
		if (curr > 1) ans += recursiveDP(curr - 1, k, dir, n) - 1;
		ans %= mod;
	}

	// Self Work
	dp[curr][k][dir] = ans;
	return ans;
}

void solve() {
	int tc, n, k, sum; cin >> tc;
	while (tc--) {
		cin >> n >> k;
		memset(dp, -1, sizeof(dp));
		sum = recursiveDP(1, k, 1, n);
		cout << sum << endl;
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