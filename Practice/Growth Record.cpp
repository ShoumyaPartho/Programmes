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
	int n, m, x, t, d, cur = 0; cin >> n >> m >> x >> t >> d;
	int heights[110] = {0};
	heights[n] = t, cur = t - d;

	for (int i = n; i >= 0; i--) {
		if (i >= x)
			heights[i] = t;

		else
			heights[i] = cur, cur -= d;
	}

	cout << heights[m] << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t = 1 ; // cin>>t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}