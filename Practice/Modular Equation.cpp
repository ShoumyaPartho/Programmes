// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
using namespace std;

#define endl "\n"
#define ll long long int

const int MAXM = 5e5;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void tempSolve() {

	ll tc, n, m, x, ans = 0; cin >> tc;

	while (tc--) {

		cin >> n >> m; ans = 0;
		vector<ll> cntPair(n + 1, 1);

		for (int b = 2; b <= n; b++) {

			x = m % b;
			ans += cntPair[x];

			for (int a = x; a <= n; a += b)
				cntPair[a]++;
		}

		cout << ans << endl;
	}

}

void tutorialSolve() {

	vector<int> factorList[MAXM + 2];
	ll tc, n, m, num, ans, left, right, mid, t; cin >> tc;

	for (int i = 1; i <= MAXM; i++) {
		for (int j = i; j <= MAXM; j += i)
			factorList[j].push_back(i);
	}

	// cout << "HELLO\n";

	while (tc--) {
		cin >> n >> m; ans = 0;

		for (int b = 2; b <= min(n, m); b++) {
			t = m - (m % b); num = 0;

			left = 0, right = factorList[t].size() - 1;

			while (left <= right) {
				mid = (left	+ right) >> 1;

				if (factorList[t][mid] < b) {
					num = mid + 1;
					left = mid + 1;
				}

				else
					right = mid - 1;
			}

			ans += num;
		}

		for (int i = (m + 1); i <= n; i++)
			ans += (i - 1);

		cout << ans << endl;
	}

}

void solve() {

	// tempSolve();

	tutorialSolve();

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