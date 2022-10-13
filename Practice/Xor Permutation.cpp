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

int main() {
	fastIO();

	int tc, t; cin >> t;

	vector<int> nums(1e5 + 10, 0);
	nums[1] = 1, nums[2] = 2;

	for (int i = 3; i <= 1e5; i++) {
		if ((nums[i - 2]^nums[i - 1]) == i) {
			nums[i] = i + 1;
			nums[i + 1] = i;
			i++;
		}

		else
			nums[i] = i;
	}

	for (tc = 1; tc <= t; tc++) {
		int n; cin >> n;
		if (n == 3) {
			cout << -1 << endl;
			continue;
		}

		for (int i = 1; i <= n; i++)
			cout << nums[i] << " \n"[i == n];
	}

	return 0;
}