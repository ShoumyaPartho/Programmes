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
	int n; cin >> n;
	vector<int> nums(n + 1, 0);

	for (int i = 1; i <= n; i++)
		cin >> nums[i];

	prev_permutation(nums.begin() + 1, nums.end());

	for (int i = 1; i <= n; i++)
		cout << nums[i] << " \n"[i == n];
}

int main() {
	fastIO();

	solve();

	return 0;
}