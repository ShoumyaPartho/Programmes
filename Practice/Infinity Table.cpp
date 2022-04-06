// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<cmath>
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
	ll tc, k, root, nRoot, mid; cin >> tc;

	while (tc--) {
		cin >> k;
		root = sqrt(k); nRoot = root + 1; mid = (root * root) + nRoot;

		if ((root * root) == k)
			cout << root << " " << 1 << endl;

		else if (k <= mid)
			cout << k - (root * root) << " " << nRoot << endl;

		else
			cout << nRoot << " " << (nRoot * nRoot) - k + 1 << endl;
	}
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