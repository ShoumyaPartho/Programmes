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

string s, m;

int calc(string &s, string&m, int i, int j, int lenS, int lenM, vector<vector<int> > &dp) {
	if (j == lenM)
		return (lenS - i + 1);

	if (i == lenS)
		return 0;

	if (dp[i][j] != -1)
		return dp[i][j];

	int ret = 0;

	if (s[i] == m[j])
		ret = calc(s, m, i + 1, j + 1, lenS, lenM, dp);

	else
		ret = calc(s, m, i + 1, j, lenS, lenM, dp);

	return dp[i][j] = ret;
}

void solve() {
	cin >> s >> m;
	ll ans = 0;
	int lenS = s.size(), lenM = m.size();
	vector<vector<int> > dp(lenS + 1, vector<int> (lenM + 1, -1));

	for (int i = 0; i < lenS; i++)
		ans += calc(s, m, i, 0, lenS, lenM, dp);

	cout << ans << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}