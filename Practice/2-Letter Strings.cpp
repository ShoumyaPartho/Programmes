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
	ll tc, n, ans, idx1, idx2; cin >> tc;

	while (tc--) {
		cin >> n; ans = 0;
		vector<vector<int> > first(20, vector<int> (20, 0)), second(20, vector<int> (20, 0));

		for (int i = 1; i <= n; i++) {
			string s; cin >> s;
			idx1 = s[0] - 'a' + 1, idx2 = s[1] - 'a' + 1;

			for (int i = 1; i < 12; i++) {
				if (i == idx2)
					continue;

				ans += first[idx1][i];
			}

			first[idx1][idx2]++;

			for (int i = 1; i < 12; i++) {
				if (i == idx1)
					continue;


				ans += second[i][idx2];
			}

			second[idx1][idx2]++;
		}

		cout << ans << endl;
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