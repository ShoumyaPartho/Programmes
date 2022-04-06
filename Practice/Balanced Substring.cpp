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
	int tc, n, a, b; cin >> tc;

	while (tc--) {
		cin >> n; a = b = 0;
		string s; cin >> s;

		for (auto ch : s) {
			if (ch == 'a')
				a++;

			else if (ch == 'b')
				b++;
		}

		if ((not a) or (not b))
			cout << "-1 -1" << endl;

		else {
			for (int i = 0; i < n - 1; i++) {
				if (s[i] != s[i + 1]) {
					cout << i + 1 << " " << i + 2 << endl;
					break;
				}
			}
		}
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