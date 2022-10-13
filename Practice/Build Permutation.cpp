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

void findAns(int r, int *nums) {
	if (r < 0)
		return;

	int s = sqrt(2 * r); s *= s;
	int l = s - r; findAns(l - 1, nums);

	for (; l <= r; l++, r--)
		nums[l] = r, nums[r] = l;
}

void solve() {
	int n; cin >> n;
	int nums[n + 1] = {0};

	findAns(n - 1, nums);

	for (int i = 0; i < n; i++)
		cout << nums[i] << " \n"[i == n - 1];
}

int main() {
	fastIO();

	// solve();

	int tc, t; cin >> t;

	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}