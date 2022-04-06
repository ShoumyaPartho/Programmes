// Team Practice Contest 2021 (OCT-2)
// Problem No - E
// Problem Satement Understanding + Binary Search (Upper Limit selection)
// Official Tutorial and KUET_1001101_111's solution was followed

// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
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
	ll a, b, c, n, m, mini = 0, maxi, mid, tempRed, tempGreen, ans = 0;
	cin >> a >> b >> c >> n >> m; maxi = a + b + c;

	while (mini <= maxi) {
		mid = (mini + maxi) >> 1;

		tempRed = min(mid, a + c), tempGreen = min(mid, b + c);

		if (tempGreen <= m and tempRed <= n) {
			ans = mid;
			mini = mid + 1;
		}

		else
			maxi = mid - 1;
	}

	cout << ans << endl;
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