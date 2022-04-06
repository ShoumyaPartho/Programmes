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

ll binary_search(ll n, ll k) {

	if (k % 2) return 1ll;

	ll low = 1, high = (1ll << n) - 1, idx; // Here mid is treated as required index (idx).

	while (low <= high) {
		idx = (low + high) / 2;

		if (idx == k)
			return n;
		else if (idx > k)
			high = idx - 1, n--;
		else
			low  = idx + 1, n--;
	}
}

void solve() {
	ll n, k; cin >> n >> k;
	cout << binary_search(n, k) << endl;
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