// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<cstdio>
#include<vector>
#include<algorithm>
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
	vector<int> ans(600, 0);
	int gcdSum, num;

	for (int i = 1; i <= 502; i++) {
		gcdSum = 0;

		for (int j = 1; j < i; j++) {
			for (int k = j + 1; k <= i; k++)
				gcdSum += (__gcd(j, k));
		}

		ans[i] = gcdSum;
	}

	while (cin >> num, num)
		cout << ans[num] << endl;
}

int main() {
	fastIO();
	clock_t start = clock();
	// Write code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}






// // Solved by: Shoumya

// #include<iostream>
// #include<ctime>
// #include<vector>
// #include<algorithm>
// #include<iomanip>
// using namespace std;

// #define endl "\n"
// #define ll long long int

// void fastIO() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0), cout.tie(0);

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
// }

// void solve() {
// 	int n, sum, tempSum;

// 	while (cin >> n, n) {
// 		sum = tempSum = 0;

// 		for (int i = 1; i < n; i++) {
// 			tempSum = 0;

// 			for (int j = i + 1; j <= n; j++)
// 				tempSum += __gcd(j, i);

// 			sum += tempSum;
// 		}

// 		cout << sum << endl;
// 	}
// }

// int main() {
// 	fastIO();
// 	clock_t start = clock();
// 	// Write code here...

// 	solve();

// #ifndef ONLINE_JUDGE
// 	clock_t stop = clock(); cout.precision(3);
// 	cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
// #endif

// 	return 0;
// }