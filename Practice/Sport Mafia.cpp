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
	ll n, k, steps, cnt, low = 1, x, high, ans;
	cin >> n >> k; high = n;

	if (n == 1) {
		cout << 0 << endl;
		return;
	}

	while (low <= high) {
		x = (low + high) >> 1; // Eaten candies
		steps = n - x; // No. of steps of putting candies.
		cnt = steps * (steps + 1) / 2ll; // No. of total provided candies.

		if (cnt == (k + x)) {
			ans = x;
			break;
		}

		else if (cnt > (k + x))
			low = x + 1;

		else
			high = x - 1;
	}

	cout << ans << endl;
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
// #include<ctime>
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
// 	ll n, k, low = 1, high, mid, ans, temp; cin >> n >> k; high = n;
// 	if (n == 1)
// 		cout << "0\n";

// 	else if (k == 0) {
// 		while (low <= high) {
// 			mid = (low + high) / 2;
// 			temp = (mid * (mid + 1)) / 2;
// 			if (temp == (n - mid)) {
// 				cout << temp << endl;
// 				break;
// 			}
// 			else if (temp > (n - mid))
// 				high = mid - 1;
// 			else
// 				low = mid + 1;
// 		}
// 	}

// 	else {
// 		while (low <= high) {
// 			mid = (low + high) / 2;
// 			temp = (mid * (mid + 1)) / 2;
// 			if ((temp - (n - mid)) == k) {
// 				ans = temp - k;
// 				high = mid - 1;
// 			}
// 			else if ((temp - (n - mid)) > k)
// 				high = mid - 1;
// 			else
// 				low = mid + 1;
// 		}
// 		cout << ans << endl;
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