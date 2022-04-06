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
	ll tc, W, H, w, h, x1, x2, y1, y2, hi, wi; cin >> tc;

	while (tc--) {
		cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w >> h;
		hi = y2 - y1, wi = x2 - x1;

		if ((x2 + w <= W) or (w <= x1))
			cout << 0 << endl;

		else if ((y2 + h <= H) or (h <= y1))
			cout << 0 << endl;

		else if ((hi + h > H) and (not (wi + w <= W)))
			cout << -1 << endl;

		else if ((wi + w > W) and (not (hi + h <= H)))
			cout << -1 << endl;

		else if ((hi + h <= H) and (not (wi + w <= W)))
			cout << min(h - y1, h - (H - y2)) << endl;

		else if ((wi + w <= W) and (not (hi + h <= H)))
			cout << min(w - x1, w - (W - x2)) << endl;

		else
			cout << min(min(h - y1, h - (H - y2)), min(w - x1, w - (W - x2))) << endl;
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