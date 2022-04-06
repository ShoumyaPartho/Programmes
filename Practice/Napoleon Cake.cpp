// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
using namespace std;

#define endl "\n"
#define ll long long int

const int MAX = 3 * (1e5 + 3);

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {

	vector<int> ara(MAX, 0);
	int tc, n, num; cin >> tc;

	while (tc--) {
		cin >> n;

		for (int i = 1; i <= n + 1; i++)
			ara[i] = 0;

		for (int i = 1; i <= n; i++) {
			cin >> num;

			if (num == 0)
				continue;

			ara[max(1, i - num + 1)]++;

			ara[i + 1]--;
		}

		for (int i = 1; i <= n; i++)
			ara[i] += ara[i - 1];

		for (int i = 1; i <= n; i++) {

			if (ara[i] >= 1)
				cout << 1;

			else
				cout << 0;

			if (i == n)
				cout << endl;

			else
				cout << " ";
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