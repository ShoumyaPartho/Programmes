// Solved by: Shoumya

#include<bits/stdc++.h>
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
	double a, b, d, angle, resA, resB; cin >> a >> b >> d;
	angle = acos(-1) / 180 * d;
	resA = a * cos(angle) - b * sin(angle);
	resB = a * sin(angle) + b * cos(angle);

	cout << setprecision(7) << fixed << resA << " " << resB << endl;
}

int main() {
	fastIO();

	// solve();

	int tc, t = 1;// cin >> t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}