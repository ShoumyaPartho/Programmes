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

void findAns(vector<vector<ll> > &nums, ll n, ll idx, ll x, ll &cnt) {
	if (idx == n) {
		if (x == 1ll)
			cnt++;

		return;
	}

	for (int i = 0; i < nums[idx].size(); i++) {
		if (x % nums[idx][i] == 0)
			findAns(nums, n, idx + 1, x / nums[idx][i], cnt);
	}
}

void solve() {
	ll n, x, t, cnt = 0; cin >> n >> x;
	vector<vector<ll> > nums;

	for (int i = 0; i < n; i++) {
		cin >> t;
		vector<ll> ara(t);

		for (int i = 0; i < t; i++)
			cin >> ara[i];

		nums.push_back(ara);
	}

	findAns(nums, n, 0, x, cnt);

	cout << cnt << endl;
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