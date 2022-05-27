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

int waysToSplitArray(vector<int>& nums) {
	int n = nums.size(), ans = 0;
	vector<ll> preSum(n, 0);
	preSum[0] = nums[0];

	for (int i = 1; i < n; i++)
		preSum[i] = preSum[i - 1] + nums[i];

	for (int i = 0; i < n; i++) {
		if (i == n - 1)
			break;

		if (preSum[i] >= (preSum[n - 1] - preSum[i]))
			ans++;
	}
	return ans;
}

void solve() {
	int n; cin >> n;
	vector<int> nums(n, 0);

	for (int i = 0; i < n; i++)
		cin >> nums[i];

	cout << waysToSplitArray(nums) << endl;

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