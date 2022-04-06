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

void solve() {
	ll n, vasya, petya, k = 1e18, low = 1, mid, high, temp, sum, t; cin >> n; high = n;

	while (low <= high) {
		mid = (low + high) / 2, temp = n, sum = 0;
		while (temp) {
			t = min(mid, temp);
			sum += t;
			temp -= t;
			temp -= (temp / 10);
		}
		if (sum * 2 >= n) {
			k = min(k, mid);
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
	cout << k << endl;
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