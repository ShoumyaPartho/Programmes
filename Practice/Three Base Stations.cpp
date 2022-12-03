// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
const double EPS = 1e-7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

double l, r, mid, ans, s1, s2, s3, x, y, z;

int ok(double d, int *stations, int n) {
	x = stations[1] + d;
	y = z = 0;

	for (int i = 1; i <= n; i++) {
		if (stations[i] > (x + d) and (not y))
			y = stations[i] + d;

		else if (stations[i] > (y + d) and y and (not z))
			z = stations[i] + d;

		else if (stations[i] > (z + d) and z)
			return 0;
	}

	ans = d, s1 = x, s2 = y, s3 = z;

	return 1 ;
}

void solve() {
	int n; cin >> n;
	int stations[n + 1] = {0};

	for (int i = 1; i <= n; i++)
		cin >> stations[i];

	sort(stations + 1, stations + n + 1);

	l = 0, r = stations[n];

	while (r - l >= EPS) {
		mid = (l + r) / 2;

		if (ok(mid, stations, n))
			r = mid - EPS;

		else
			l = mid + EPS;
	}

	cout << setprecision(6) << fixed << ans << endl << s1 << " " << s2 << " " << s3 << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}