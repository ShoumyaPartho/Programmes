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
	int tc, maxi, maxiIdx, n, lStart, rStart; cin >> tc;

	while (tc--) {
		cin >> n;
		vector<int> ara(n + 1, 0), recAra(n + 1, 0);
		maxi = 0, maxiIdx = -1;

		for (int i = 1; i <= n; i++) {
			cin >> ara[i];

			if (ara[i] > maxi) {
				maxi = ara[i];
				maxiIdx = i;
			}
		}

		if (not (maxiIdx == 1 or maxiIdx == n))
			cout << -1 << endl;

		else {
			if (n & 1)
				lStart = (n >> 1) + 1, rStart = (n >> 1) + 2;

			else
				lStart = n >> 1, rStart = (n >> 1) + 1;

			for (int i = lStart, j = 1; i >= 1; i--, j++)
				recAra[j] = ara[i];

			for (int i = n, j = rStart; i >= rStart; i--, j++)
				recAra[i] = ara[j];

			for (int i = 1; i <= n; i++)
				cout << recAra[i] << " \n"[i == n];
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