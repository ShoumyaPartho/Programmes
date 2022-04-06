#include<iostream>
#include<ctime>
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

void binarySearch(ll *dorm, ll n, ll q) {
	ll low = 1, high = n, mid;

	while (low <= high) {
		mid = (low + high) / 2ll;

		if (dorm[mid] >= q and dorm[mid - 1] < q) {
			cout << mid << " " << q - dorm[mid - 1] << endl;
			return;
		}
		else if (dorm[mid] < q)
			low = mid + 1;
		else
			high = mid - 1;
	}
}

void solve() {
	ll n, m; cin >> n >> m; ll dorm[n + 1], q; dorm[0] = 0;
	for (auto i = 1; i <= n; i++) {
		cin >> dorm[i];
		dorm[i] += dorm[i - 1];
	}
	for (int i = 1; i <= m; i++) {
		cin >> q;
		binarySearch(dorm, n, q);
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