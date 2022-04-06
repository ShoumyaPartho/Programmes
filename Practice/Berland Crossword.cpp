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
	int tc, n, u, r, d, l, tu, tr, td, tl, check; cin >> tc;
	while (tc--) {
		cin >> n >> u >> r >> d >> l; check = 0;
		for (int mask = 1; mask <= 16; mask++) {
			tu = u, tr = r, tl = l, td = d;
			if (mask & 1)
				tu--, tl--;
			if (mask & 2)
				tl--, td--;
			if (mask & 4)
				td--, tr--;
			if (mask & 8)
				tu--, tr--;
			// cout << "Here: " << tu << " " << tr << " " << td << " " << tl << endl;
			if ((min(tu, min(tr, min(td, tl))) >= 0) and ((max(tu, max(tr, max(td, tl)))) <= (n - 2))) {
				check = 1;
				cout << "YES\n";
				break;
			}
		}
		if (not check) cout << "NO\n";
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