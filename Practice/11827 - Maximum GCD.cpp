// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<string>
#include<sstream>
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
	int tc, n, idx, maxi; cin >> tc;
	cin.ignore();

	while (tc--) {
		string s; getline(cin, s); maxi = 0;
		vector<int> nums;
		stringstream ss(s);

		while (ss >> n)
			nums.push_back(n);

		for (int i = 0; i < nums.size() - 1; i++) {
			for (int j = i + 1; j < nums.size(); j++)
				maxi = max(maxi, __gcd(nums[i], nums[j]));
		}

		cout << maxi << endl;
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















// // Solved by: Shoumya

// #include<iostream>
// #include<ctime>
// #include<vector>
// #include<string>
// #include<sstream>
// #include<algorithm>
// #include<cstdio>
// using namespace std;

// #define endl "\n"
// #define ll long long int

// void fastIO() {
// 	// ios_base::sync_with_stdio(false);
// 	// cin.tie(0), cout.tie(0);

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
// }

// void solve() {
// 	int n, num, gcd; // cin >> n;
// 	scanf("%d", &n);
// 	getchar();

// 	while (n--) {
// 		vector<int> ara(110, 0);
// 		string s; getline(cin, s);
// 		stringstream ss(s); num = 1, gcd = 0;

// 		while (ss >> ara[num])
// 			num++;

// 		// for (int i = 1; i < num; i++)
// 		// cout << ara[i] << " \n"[i == num - 1];

// 		for (int i = 1; i < num - 1; i++) {
// 			for (int j = i + 1; j < num; j++)
// 				gcd = max(gcd, __gcd(ara[i], ara[j]));
// 		}

// 		// cout << gcd << endl;
// 		printf("%d\n", gcd);
// 	}
// }

// int main() {
// 	fastIO();
// 	clock_t start = clock();
// 	// Write code here...

// 	solve();

// #ifndef ONLINE_JUDGE
// 	clock_t stop = clock(); cout.precision(10);
// 	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
// #endif

// 	return 0;
// }