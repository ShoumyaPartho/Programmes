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

void solve() {
	int m, k, n, ak, takenFancyK, takenK, taken1, takenFancy1, left1, toReplace, ans;
	cin >> m >> k >> n >> ak;

	takenK = m / k;
	taken1 = m % k;
	takenFancyK = max(takenK - ak, 0);
	takenFancy1 = max(taken1 - n, 0);
	left1 = max(n - taken1, 0);
	toReplace = min(left1 / k, takenFancyK);

	ans = takenFancyK + takenFancy1 - toReplace;

	cout << ans << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}