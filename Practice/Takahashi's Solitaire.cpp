// Solved by: Shoumya

#include<bits/stdc++.h>
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

ll dfs(ll st, ll cur, ll curSum, ll sum, ll &ans, ll MOD, unordered_map<ll, ll> &mp, unordered_map<ll, ll> &dp) {
	if (dp.count(cur)) {
		ll temp = curSum + dp[cur];
		ll t2 = sum - temp;
		ans = min(ans, t2);
		return dp[cur];
	}

	else if (not mp.count(cur))
		return 0;

	ll t = cur * mp[cur];
	curSum += t;
	mp[cur] = 0;
	ll temp = (cur + 1) % MOD;

	if (temp == st) {
		ll t2 = sum - curSum;
		ans = min(ans, t2);
		return dp[cur] = t;
	}

	else {
		dp[cur] = t;
		dp[cur] += dfs(st, temp, curSum, sum, ans, MOD, mp, dp);
		ans = min(ans, sum - dp[cur]);
		return dp[cur];
	}
}

void solve() {
	ll n, m, x, sum = 0, ans = 1e18; cin >> n >> m;
	unordered_map<ll, ll> mp, dp;
	vector<ll> nums(n + 1, 0);

	for (int i = 1; i <= n; i++) {
		cin >> x; nums[i] = x;
		sum += x;
		mp[x]++;
	}

	for (int i = 1; i <= n; i++) {
		unordered_map<ll, ll> tMp(mp);
		dfs(nums[i], nums[i], 0ll, sum, ans, m, tMp, dp);
	}

	cout << ans << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}