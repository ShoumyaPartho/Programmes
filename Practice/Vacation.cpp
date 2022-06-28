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
	ll n; cin >> n;
	vector<ll> a(n + 1, 0), b(n + 1, 0), c(n + 1, 0), dpA(n + 1, 0), dpB(n + 1, 0), dpC(n + 1, 0);

	for (int i = 1; i <= n; i++)
		cin >> a[i] >> b[i] >> c[i];

	if (n == 1) {
		cout << max(a[1], max(b[1], c[1])) << endl;
		return;
	}

	dpA[1] = a[1], dpB[1] = b[1], dpC[1] = c[1];

	for (int i = 2; i <= n; i++) {
		dpA[i] = a[i] + max(dpB[i - 1], dpC[i - 1]);
		dpB[i] = b[i] + max(dpA[i - 1], dpC[i - 1]);
		dpC[i] = c[i] + max(dpB[i - 1], dpA[i - 1]);
	}

	cout << max(dpA[n], max(dpB[n], dpC[n])) << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t = 1; // cin>>t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}