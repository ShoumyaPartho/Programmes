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

bool binary_search(ll *ara, ll n, ll idx, ll tempSum) {
	ll low = idx, high = n, mid;
	if (low > n) return false;

	while (low <= high) {
		mid = (low + high) >> 1;

		if (ara[n] - ara[mid - 1] == tempSum)
			return true;
		else if ((ara[n] - ara[mid - 1]) < tempSum)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return false;
}

void solve() {
	ll n, x, maxSum = 0, tempSum; cin >> n; ll ara[n + 1]; ara[0] = 0;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		ara[i] = ara[i - 1] + x;
	}

	for (int i = 1; i <= n; i++) {
		tempSum = ara[i];
		bool flag = binary_search(ara, n , i + 1, tempSum);
		if (flag)
			maxSum = max(maxSum, tempSum);
	}
	cout << maxSum << endl;
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