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

bool cmprtr(pair<int, int> &item1, pair<int, int> &item2) {
	return (item1.second - item1.first) < (item2.second - item2.first);
}

void solve() {
	int tc, n, l, r, maxi; cin >> tc;

	while (tc--) {
		cin >> n; maxi = -1;
		vector<pair<int, int> > ranges;
		ranges.push_back({0, 0});

		for (int i = 1; i <= n; i++) {
			cin >> l >> r;
			maxi = max(maxi, r);
			ranges.push_back({l, r});
		}

		vector<bool> nums(maxi + 1, true);

		sort(ranges.begin() + 1, ranges.end(), cmprtr);

		for (int i = 1; i <= n; i++) {
			if (ranges[i].first == ranges[i].second) {
				cout << ranges[i].first << " " << ranges[i].second << " " << ranges[i].second << endl;
				nums[ranges[i].first] = false;
				continue;
			}

			for (int j = ranges[i].first; j <= ranges[i].second; j++) {
				if (nums[j]) {
					cout << ranges[i].first << " " << ranges[i].second << " " << j << endl;
					nums[j] = false;
					break;
				}
			}
		}
		cout << endl << endl;
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