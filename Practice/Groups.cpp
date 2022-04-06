// Implementation. Set formula: S(A v B) = S(A) + S(B) - S(A ^ B)
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
	int tc, n, sumFirst, sumSecond, sumCommon, flag; cin >> tc;

	while (tc--) {
		cin >> n; flag = 0;

		vector<vector<int> > schedule(n + 1, vector<int> (6, 0));

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= 5; j++)
				cin >> schedule[i][j];
		}

		for (int i = 1; i <= 5 and (not flag); i++) {
			for (int j = i + 1; j <= 5 and (not flag); j++) {

				sumFirst = sumSecond = sumCommon = 0;

				for (int k = 1; k <= n; k++) {

					if (schedule[k][i])
						sumFirst++;

					if (schedule[k][j])
						sumSecond++;

					if (schedule[k][i] and schedule[k][j])
						sumFirst--, sumSecond--, sumCommon++;
				}

				if (sumFirst <= (n >> 1) and sumSecond <= (n >> 1) and (sumFirst + sumSecond + sumCommon == n)) {
					flag = 1;
					break;
				}
			}
		}

		cout << (flag ? "YES" : "NO") << endl;
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