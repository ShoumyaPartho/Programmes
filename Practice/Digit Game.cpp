// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<string>
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
	int tc, n, oddWin, evenWin; cin >> tc;
	while (tc--) {

		cin >> n;
		string s = "0", temp; cin >> temp;
		s += temp; oddWin = evenWin = 0;

		for (int i = 1; i <= n; i += 2) {
			if ((s[i] - '0') % 2)
				oddWin++;
		}

		for (int i = 2; i <= n; i += 2) {
			if ((s[i] - '0') % 2 == 0)
				evenWin++;
		}

		if (n % 2) {

			if (oddWin)
				cout << 1 << endl;

			else
				cout << 2 << endl;
		}

		else {

			if (evenWin)
				cout << 2 << endl;

			else
				cout << 1 << endl;
		}
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