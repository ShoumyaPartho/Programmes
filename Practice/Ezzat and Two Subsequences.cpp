// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int

const ll INF = 1e12;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	ll maxi, sum, tc, n; cin >> tc;

	while (tc--) {
		cin >> n;
		vector<ll> ara(n + 1, 0); maxi = -INF; sum = 0;

		for (int i = 1; i <= n; i++) {
			cin >> ara[i];
			maxi = max(maxi, ara[i]);
			sum += ara[i];
		}

		cout << fixed;
		cout << setprecision(6) << ((double)(sum - maxi) / (n - 1)) + maxi << endl;
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