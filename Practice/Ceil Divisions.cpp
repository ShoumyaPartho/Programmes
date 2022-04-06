// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<cmath>
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

void calculate(int n, vector<pair<int, int> > &ans) {
	if (n == 2)
		return;
	int y = max(1, (int)sqrt(n));

	while ((y * y) < n)
		y++;

	for (int i = y + 1; i < n; i++)
		ans.push_back({i, n});

	ans.push_back({n, y});
	ans.push_back({n, y});

	calculate(y, ans);
}

void solve() {
	int tc, n; cin >> tc;

	while (tc--) {
		cin >> n;
		vector<pair<int, int> > ans;

		calculate(n, ans);

		cout << (int)ans.size() << endl;

		for (auto x : ans)
			cout << x.first << " " << x.second << endl;
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