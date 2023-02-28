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
	int n, sum = 0; cin >> n;
	int ara[5 * n + 10];

	for (int i = 1; i <= 5 * n; i++)
		cin >> ara[i];

	sort(ara + 1, ara + 1 + 5 * n);

	for (int i = n + 1; i <= 4 * n; i++)
		sum += ara[i];

	cout << fixed << setprecision(6) << sum * 1.0 / (3 * n) << endl;
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