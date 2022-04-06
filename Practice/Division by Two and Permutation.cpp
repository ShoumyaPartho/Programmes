// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<unordered_set>
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
		cin >> n; flag = 1;
		vector<int> nums(n + 1, 0);

		for (int i = 1; i <= n; i++)
			cin >> nums[i];

		unordered_set<int> st;

		for (int i = 1; i <= n and flag; i++) {
			while (1) {
				if (nums[i] and nums[i] <= n and (st.count(nums[i]) == 0)) {
					st.insert(nums[i]);
					break;
				}

				else if (nums[i] <= 0) {
					flag = 0;
					break;
				}

				nums[i] >>= 1;
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