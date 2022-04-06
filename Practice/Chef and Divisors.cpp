// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
using namespace std;

#define endl "\n"
#define ll long long int

const int MAX = 1e6 + 5;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {

	vector<int> ans(MAX, 1), divCnt[MAX];

	for (int i = 2; i < MAX ; i++) {

		for (int j = i; j < MAX; j += i) {

			ans[j]++;

			if (ans[i] == 4)
				divCnt[j].push_back(i);
		}
	}

	for (int i = 2; i < MAX; i++) {

		for (int val : divCnt[i])

			ans[i] = min(ans[i], ans[i / val]);
	}

	int tc, n; cin >> tc;

	while (tc--) {

		cin >> n;
		cout << ans[n] << endl;
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