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

void solve() {
	int n, gcd;

	while (cin >> n, n) {
		vector<int> nums; nums.push_back(n);

		while (cin >> n, n)
			nums.push_back(n);

		sort(nums.begin(), nums.end());

		gcd = nums[1] - nums[0];

		for (int i = 2; i < nums.size(); i++)
			gcd = __gcd(gcd, nums[i] - nums[i - 1]);

		cout << gcd << endl;
	}
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










// #include<iostream>
// #include<cstdio>
// #include<ctime>
// using namespace std;

// void fastIO() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0), cout.tie(0);

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
// }

// long long int gcd(long long int a, long long int b) {
// 	while (b) {
// 		a = a % b;
// 		swap(a, b);
// 	}
// 	return a;
// }

// void solve() {
// 	long long int ara[1010], gcD, dif;
// 	while (scanf("%lld", &ara[0]) != EOF) {
// 		if (ara[0] == 0) break;
// 		int idx = 1;

// 		while (1) {
// 			scanf("%lld", &ara[idx]);
// 			if (ara[idx] == 0) break;
// 			idx++;
// 		}
// 		gcD = 0;

// 		for (int i = 1; i < idx; i++) {
// 			dif = ara[i] - ara[i - 1];
// 			gcD = gcd(gcD, dif);
// 		}
// 		if (gcD < 0) gcD = -gcD;
// 		printf("%lld\n", gcD);
// 	}
// }

// int main() {
// 	fastIO();
// 	clock_t start = clock();
// 	// Writhe code here...

// 	solve();

// #ifndef ONLINE_JUDGE
// 	clock_t stop = clock(); cout.precision(10);
// 	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
// #endif

// 	return 0;
// }