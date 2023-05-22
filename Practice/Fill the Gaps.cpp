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
	int nums[n + 1] = {0};

	for (int i = 1; i <= n; i++)
		cin >> nums[i];

	for (int i = 1; i < n; i++) {
		cout << nums[i] << " ";

		if (abs(nums[i] - nums[i + 1]) > 1) {
			if (nums[i] < nums[i + 1]) {
				for (int j = nums[i] + 1; j < nums[i + 1]; j++)
					cout << j << " ";
			}

			else {
				for (int j = nums[i] - 1; j > nums[i + 1]; j--)
					cout << j << " ";
			}
		}
	}

	cout << nums[n] << endl;
}

int main() {
	fastIO();

	solve();

	return 0;
}