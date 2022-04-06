// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const ll INF = 1e9 + 7;
const ll LIM = 1e6 + 7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

ll changeNum(ll num) {
	int temp, n = num % 10; temp = num / 10;

	while (temp) {
		temp /= 10;
		n *= 10;
	}

	return (n + (num / 10));
}

// void findAns(ll num, ll &a, ll &n, vector<ll> &dp, ll stepCnt, vector<bool> &flags) {

// 	if (num == n) {
// 		dp[n] = min(dp[n], stepCnt);
// 		return;
// 	}

// 	if (num >= LIM or stepCnt >= dp[n] or (dp[num] != INF) or (num >= (n * 10)))
// 		return;

// 	if (dp[num] == INF) {
// 		flags[num] = true;

// 		if ((num * a < LIM) and not flags[num * a])
// 			findAns(num * a, a, n, dp, stepCnt + 1, flags);
// 		if (num * a < LIM)
// 			dp[num] = min(dp[num * a], dp[num]);

// 		if (num >= 10 and (num % 10) and (changeNum(num) < LIM)) {
// 			if (not flags[changeNum(num)])
// 				findAns(changeNum(num), a, n, dp, stepCnt + 1, flags);
// 			dp[num] = min(dp[changeNum(num)] + stepCnt + 1, dp[num]);
// 		}

// 		// if (flags[num] < INF)
// 		// 	flags[num] = false;
// 	}
// }

void findAns(ll num, ll &a, ll &n, vector<ll> &dp, vector<bool> &flags) {
	if (num >= LIM or (num == n) or (dp[num] != INF) or (flags[num]) or (num >= (n * 10)))
		return;

	flags[num] = true;

	findAns(num * a, a, n, dp, flags);

	if ((num * a) < LIM)
		dp[num] = min(dp[num * a] + 1, dp[num]);

	if (num >= 10 and (num % 10) and (changeNum(num) < LIM)) {
		findAns(changeNum(num), a, n, dp, flags);
		dp[num] = min(dp[changeNum(num)] + 1, dp[num]);
	}
}

void solve() {
	ll a, n; cin >> a >> n;
	vector<ll> dp(LIM, INF);
	vector<bool> flags(LIM, false);

	// Approach - 1
	// findAns(1, a, n, dp, 0, flags);

	// Approach - 2
	dp[n] = 0;
	findAns(1, a, n, dp, flags);

	cout << (dp[1] == INF ? -1 : dp[1]) << endl;
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