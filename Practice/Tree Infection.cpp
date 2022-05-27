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

void repeat(vector<int> ara, int &ans) {
	if (ara.empty())
		return;

	int len = ara.size();

	ara[0]--;

	for (int i = 0; i < len; i++)
		ara[i]--;

	ans++;

	sort(ara.rbegin(), ara.rend());

	while ((not ara.empty()) and (ara.back() <= 0))
		ara.pop_back();

	repeat(ara, ans);
}

void solve() {
	int tc, n, x, ans; cin >> tc;

	while (tc--) {
		cin >> n; ans = 0;
		vector<int> ara(n);

		for (int i = 1; i < n; i++) {
			cin >> x;
			ara[--x]++;
		}

		ara.push_back(1);

		sort(ara.rbegin(), ara.rend());

		while ((not ara.empty()) and (ara.back() <= 0))
			ara.pop_back();

		n = ara.size();

		for (int i = 0; i < n; i++) {
			ara[i] = ara[i] - (n - i);
			ans++;
		}

		sort(ara.rbegin(), ara.rend());

		while ((not ara.empty()) and (ara.back() <= 0))
			ara.pop_back();

		repeat(ara, ans);

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