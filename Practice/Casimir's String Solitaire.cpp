// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<string>
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
	int tc, a, b, c, flag; cin >> tc;

	while (tc--) {
		string s; cin >> s;
		a = b = c = 0; flag = 1;

		for (auto ch : s) {
			if (ch == 'A')
				a++;

			if (ch == 'B')
				b++;

			if (ch == 'C')
				c++;
		}

		if (a) {
			if (b == 0 or b < a)
				flag = 0;

			else {
				b -= a;
				a = 0;
			}
		}

		if (b) {
			if (c == 0 or c != b)
				flag = 0;
		}

		if (c) {
			if (b == 0 or b != c)
				flag = 0;
		}

		cout << (flag ? "YES" : "NO") << endl;
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