#include<iostream>
#include<ctime>
#include<string>
#include <vector>
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int tc, n, c, cnt; cin >> tc;
	while (tc--) {
		cin >> n >> c; cnt = 0;
		string s; vector<int> v;
		cin >> s;

		for (int i = 0; i < n; i++) {
			if (s[i] == '1') v.push_back(i);
		}

		for (int i = 0; i + 1 < v.size(); i++) {
			if (v[i + 1] - v[i] - 1 > c) cnt++;
		}

		if (not v.empty() and n - v.back() - 1 + v[0] > c) cnt++;

		if (cnt > 1) cout << "NO\n";
		else cout << "YES\n";
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