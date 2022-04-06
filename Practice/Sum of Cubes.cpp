#include<iostream>
#include<ctime>
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
	ll tc, cube[10010], x, num, check;
	for (ll i = 0; i <= 10005ll; i++) cube[i] = i * i * i;
	cin >> tc;
	while (tc--) {
		cin >> x; check = 0;
		if (x == 1) {
			cout << "NO\n";
			continue;
		}
		for (ll i = 1; i <= 10001; i++) {
			num = x - cube[i];
			if (binary_search(cube + 1, cube + 10001, num)) {
				cout << "YES\n";
				check = 1;
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