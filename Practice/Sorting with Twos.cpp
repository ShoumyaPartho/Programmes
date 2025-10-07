// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
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

bool powOfTwo(int i) {
	return (ceil(log2(i)) == floor(log2(i)));
}

void solve() {
	int n, flag = 1; cin >> n;
	int nums[n + 1] = {0};

	for (int i = 1; i <= n; i++)
		cin >> nums[i];

	for (int i = 1; i < n; i++) {
		if ((not powOfTwo(i)) and (nums[i] > nums[i + 1])) {
			flag = 0;
			break;
		}
	}

	cout << (flag ? "YES" : "NO") << endl;
}

int main() {
	fastIO();

	int tc; cin >> tc;

	for (int t = 1; t <= tc; t++)
		solve();

	return 0;
}