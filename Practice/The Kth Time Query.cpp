// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<unordered_map>
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
	int n, x, q, k; cin >> n >> q;
	unordered_map<int, vector<int> > mp;
	unordered_map<int, int> cnt;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		cnt[x]++;
		mp[x].push_back(i);
	}

	for (int i = 1; i <= q; i++) {
		cin >> x >> k;

		if ((not cnt.count(x)) or cnt[x] < k) {
			cout << -1 << endl;
			continue;
		}

		cout << mp[x][k - 1] << endl;
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