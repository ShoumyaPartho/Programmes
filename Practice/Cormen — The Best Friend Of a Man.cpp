// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
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

	int n, k, cost = 0, temp; cin >> n >> k;
	vector<int> ara(n + 1, 0);

	for (int i = 1; i <= n; i++)
		cin >> ara[i];

	for (int i = 2; i <= n; i++) {

		if ((ara[i - 1] + ara[i]) < k) {

			temp = k - (ara[i - 1] + ara[i]);
			cost += temp;
			ara[i] += temp;
		}
	}

	cout << cost << endl;

	for (int i = 1; i <= n; i++)
		cout << ara[i] << " \n"[i == n];
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