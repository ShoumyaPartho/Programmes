#include<iostream>
#include<ctime>
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

int numOfShops(int *shops, int n, int q) {
	int low = 1, high = n, mid;

	while (low <= high) {
		mid = (low + high) / 2;

		if (shops[mid] <= q) {
			if ((mid + 1 <= n) and shops[mid + 1] > q)
				return mid;
			else if ((mid + 1 <= n) and shops[mid + 1] <= q)
				low = mid + 1;
			else if (mid + 1 > n)
				return mid;
		}
		else if (shops[mid] > q)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return 0;
}

void solve() {
	int n, m, q; cin >> n; int shops[n + 1];
	for (int i = 1; i <= n; i++)
		cin >> shops[i];
	sort(shops + 1, shops + n + 1);
	cin >> m;
	for (int i = 1; i <= m; i++) {
		cin >> q;
		cout << numOfShops(shops, n, q) << endl;
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