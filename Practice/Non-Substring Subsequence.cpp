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
	int tc, n, q, l, r, flag; cin >> tc;
	string s;

	while (tc--) {
		cin >> n >> q;
		cin >> s;
		int firstZero = -1, lastZero = -1, firstOne = -1, lastOne = -1;

		for (int i = 0; i < n; i++) {

			if (s[i] == '0') {

				if (firstZero == -1)
					firstZero = i;

				if (lastZero == -1 or lastZero < i)
					lastZero = i;
			}

			else if (s[i] == '1') {

				if (firstOne == -1)
					firstOne = i;

				if (lastOne == -1 or lastOne < i)
					lastOne = i;
			}
		}

		for (int i = 1; i <= q; i++) {
			cin >> l >> r; flag  = 0;
			// cout << l << " " << r << endl;

			if (s[l - 1] == '0' and (not flag)) {

				if (firstZero < (l - 1) and firstZero != -1) {
					cout << "YES\n";
					flag = 1;
				}
			}

			if (s[r - 1] == '0' and (not flag)) {

				if (lastZero > (r - 1) and lastZero != -1) {
					cout << "YES\n";
					flag = 1;
				}
			}

			if (s[l - 1] == '1' and (not flag)) {

				if (firstOne < (l - 1) and firstOne != -1) {
					cout << "YES\n";
					flag = 1;
				}
			}

			if (s[r - 1] == '1' and (not flag)) {

				if (lastOne > (r - 1) and lastOne != -1) {
					cout << "YES\n";
					flag = 1;
				}
			}

			if (not flag)
				cout << "NO\n";
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