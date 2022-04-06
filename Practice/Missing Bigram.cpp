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
	int tc, n, flag; cin >> tc;

	while (tc--) {
		cin >> n; flag = 0;
		vector<string> biGrams(n);
		vector<char> ans;

		for (int i = 1; i <= n - 2; i++)
			cin >> biGrams[i];

		if (n == 3) {
			cout << biGrams[1] << biGrams[1][1] << endl;
			continue;
		}

		ans.push_back(biGrams[1][0]);

		for (int i = 2; i <= n - 2; i++) {
			if (biGrams[i][0] == biGrams[i - 1][1])
				ans.push_back(biGrams[i][0]);

			else {
				ans.push_back(biGrams[i - 1][1]);
				ans.push_back(biGrams[i][0]);

				flag = 1;
			}

			if (i == n - 2)
				ans.push_back(biGrams[i][1]);
		}

		for (auto s : ans)
			cout << s;

		if (not flag)
			cout << ans[ans.size() - 1];

		cout << endl;
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