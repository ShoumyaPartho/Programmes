// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const ll NUM = 1e6;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	ll tc, t, c[4], m[4], y[4], k[4], minC, minM, minY, minK; cin >> t;
	ll ansC, ansM, ansY, ansK, left;

	for (tc = 1; tc <= t; tc++) {
		cout << "Case #" << tc << ": ";

		cin >> c[1] >> m[1] >> y[1] >> k[1];
		cin >> c[2] >> m[2] >> y[2] >> k[2];
		cin >> c[3] >> m[3] >> y[3] >> k[3];

		minC = min(c[1], min(c[2], c[3]));
		minM = min(m[1], min(m[2], m[3]));
		minY = min(y[1], min(y[2], y[3]));
		minK = min(k[1], min(k[2], k[3]));

		if (minC + minM + minY + minK < NUM) {
			cout << "IMPOSSIBLE" << endl;
			continue;
		}

		left = NUM;

		ansC = min(minC, left);
		left = left - ansC;

		ansM = min(minM, left);
		left = left - ansM;

		ansY = min(minY, left);
		left = left - ansY;

		ansK = min(minK, left);
		left = left - ansK;

		cout << ansC << " " << ansM << " " << ansY << " " << ansK << endl;
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