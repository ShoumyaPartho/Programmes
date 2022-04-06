// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
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
	int n, m, maxi, mini, ans;

	while (cin >> n >> m, (n or m)) {

		maxi = max(n, m);
		mini = min(n, m);

		if (mini == 1)
			ans = maxi;

		else if (mini == 2)
			ans = 4 * (maxi / 4) + 2 * min(2, maxi % 4);

		else
			ans = (maxi * mini + 1) / 2;

		cout << ans << " knights may be placed on a " << n << " row " << m << " column board." << endl;
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