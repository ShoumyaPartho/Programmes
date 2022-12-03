// Solved by: Shoumya

#include<bits/stdc++.h>
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
	int n, x; cin >> n;
	vector<int> nums;

	while (n--) {
		cin >> x;

		if (nums.empty())
			nums.push_back(x);

		else if (nums.back() < x)
			nums.push_back(x);

		else {
			auto t = lower_bound(nums.begin(), nums.end(), x) - nums.begin();
			nums[t] = x;
		}
	}

	cout << nums.size() << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}