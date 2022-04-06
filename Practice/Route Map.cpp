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
	int n, m; cin >> n >> m;
	string s, t;
	vector<string> names;
	unordered_map<string, int> station;

	for (int i = 0; i < n; i++) {
		cin >> s;
		names.push_back(s);
		station[s] = 0;
	}

	for (int i = 0; i < m; i++) {
		cin >> t;
		station[t]++;
	}

	for (auto it : names) {
		if (station[it])
			cout << "Yes" << endl;

		else
			cout << "No" << endl;
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