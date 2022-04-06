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
	ll tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		cout << "Case #" << tc << ": ";

		string  N; cin >> N;
		ll sum = 0; ll len = N.size(), x;

		for (int i = 0; i < len; i++)
			sum = (sum + (N[i] - '0'));
		sum = sum % 9;
		sum = (9 - sum) % 9;

		if (not sum) {
			cout << N[0] << '0';
			for (int i = 1; i < len; i++)
				cout << N[i];
			cout << endl;
			continue;
		}

		x = 0;

		while (1) {
			if ((N[x] - '0') <= sum)
				x++;

			else {
				for (int i = 0; i < x; i++)
					cout << N[i];
				cout << sum;

				for (int i = x; i < len; i++)
					cout << N[i];
				cout << endl;
				break;
			}

			if (x == len) {
				cout << N << sum << endl;
				break;
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