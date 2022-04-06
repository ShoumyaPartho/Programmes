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
	int tc, idx, temp; cin >> tc;

	while (tc--) {
		string x; cin >> x; idx = -1;

		for (int i = 0; i < x.size() - 1; i++) {
			temp = (x[i] - '0') + (x[i + 1] - '0');

			if (temp >= 10)
				idx = i;
		}

		if (idx > -1) {
			for (int i = 0; i < idx; i++)
				cout << x[i];

			cout << x[idx] - '0' + x[idx + 1] - '0';

			for (int i = idx + 2; i < x.size(); i++)
				cout << x[i];
			cout << endl;
		}

		else {
			cout << x[0] - '0' + x[1] - '0';

			for (int i = 2; i < x.size(); i++)
				cout << x[i];
			cout << endl;
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