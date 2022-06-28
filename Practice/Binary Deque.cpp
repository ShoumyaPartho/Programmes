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

void getAnsTwoPointer(int *ara, int n, int s) {
	int sum = 0, left = 1, ans = n + 1;

	for (int i = 1; i <= n; i++) {
		sum += ara[i];

		while (sum > s)
			sum -= ara[left++];

		if (sum == s)
			ans = min(ans, n - i + left - 1);
	}

	cout << (ans == n + 1 ? -1 : ans) << endl;
}

void getAnsBinSearch(int *ara, int n, int s) {
	int ans = INT_MAX;
	for (int i = 1; i <= n; i++)
		ara[i] = ara[i] + ara[i - 1];

	for (int i = 1; i <= n; i++) {
		int left = i, right = n, mid;

		while (left <= right) {
			mid = (left + right) >> 1;

			if (ara[mid] - ara[i - 1] == s) {
				ans = min(ans, n - mid + i - 1);
				left = mid + 1;
			}

			else if (ara[mid] - ara[i - 1] > s)
				right = mid - 1;

			else
				left = mid + 1;
		}
	}
	cout << (ans == INT_MAX ? -1 : ans) << endl;
}

void solve() {
	int n, s; cin >> n >> s;
	int ara[n + 1] = {0};

	for (int i = 1; i <= n; i++)
		cin >> ara[i];

	// getAnsTwoPointer(ara, n, s);
	getAnsBinSearch(ara, n, s);
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