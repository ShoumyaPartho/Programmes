// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
const int lim = 1e6;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	int n, x, flag = 1, t1, t2; cin >> n;
	priority_queue<int> pq;
	vector<int> nums(n + 1, 0);

	for (int i = 1; i <= n; i++) {
		cin >> nums[i];
		t1 = t2 = -1;

		if (not pq.empty()) {
			t1 = pq.top();
			pq.pop();
		}

		if (not pq.empty()) {
			t2 = pq.top();
			pq.pop();
		}

		if (flag and t1 != -1 and t1 > nums[i]) {
			if (t2 != -1 and t2 > nums[i])
				flag = 0;

			else if (nums[i - 1] <= nums[i])
				flag = 0;

			else if ((n - i) % 2 == 1)
				flag = 0;
		}

		if (t1 != -1)
			pq.push(t1);

		if (t2 != -1)
			pq.push(t2);

		pq.push(nums[i]);
	}

	cout << (flag ? "YES" : "NO") << endl;
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