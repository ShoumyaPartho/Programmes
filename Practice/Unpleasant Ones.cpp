// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
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
	int tc, n, odd; cin >> tc;

	while (tc--) {
		cin >> n; odd =  n;

		vector<int> ara(n + 1);

		for (int i = 1; i <= n; i++) {
			cin >> ara[i];

			if (ara[i] & 1)
				odd = i;
		}

		swap(ara[odd], ara[n]);

		for (int i = 1; i <= n; i++)
			cout << ara[i] << " \n"[i == n];
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