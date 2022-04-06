// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
using namespace std;

#define endl "\n"
#define ll long long int

const int MAX = 1e9 + 7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {

	int n, k, x, ans, maxi = MAX; cin >> n >> k;
	vector<int> height(n + 1, 0);

	for (int i = 1; i <= n; i++) {
		cin >> x;
		height[i] = height[i - 1] + x;
	}

	for (int i = k; i <= n; i++) {
		if (height[i] - height[i - k] < maxi) {
			maxi = height[i] - height[i - k];
			ans = i - k + 1;
		}
	}

	cout << ans << endl;
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