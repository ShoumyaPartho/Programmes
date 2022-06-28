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
	ll tc, n, x, ans, prevDay, curDay; cin >> tc;

	while (tc--) {
		cin >> n >> x;
		vector<ll> ara(n + 1, 0);

		for (int i = 1; i <= n; i++)
			cin >> ara[i];

		sort(ara.begin() + 1, ara.end());

		for (int i = 1; i <= n; i++)
			ara[i] += ara[i - 1];

		prevDay = -1ll, ans = 0;

		for (int i = n; i >= 1; i--) {
			curDay = (x - ara[i] >= 0 ? ((x - ara[i]) / i) : -1);

			ans += (i) * (curDay - prevDay);
			prevDay = curDay;
		}

		cout << ans << endl;
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
// #include<algorithm>
// #include<iomanip>
// using namespace std;

// #define endl "\n"
// #define ll long long int

// void fastIO() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0), cout.tie(0);

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
// }

// void solve() {
//     ll tc, n, x, ans, curDay, prevDay; cin >> tc;

//     while (tc--) {
//         cin >> n >> x; ans = 0, prevDay = -1;
//         vector<ll> ara(n + 1, 0);

//         for (int i = 1; i <= n; i++)
//             cin >> ara[i];

//         sort(ara.begin() + 1, ara.end());

//         for (int i = 1; i <= n; i++)
//             ara[i] += ara[i - 1];

//         for (int i = n; i >= 1; i--) {
//             curDay = (x - ara[i] >= 0 ? (x - ara[i]) / i : -1);

//             ans += (i * (curDay - prevDay));
//             prevDay = curDay;
//         }

//         cout << ans << endl;
//     }
// }

// int main() {
//     fastIO();
//     clock_t start = clock();
//     // Write code here...

//     solve();

// #ifndef ONLINE_JUDGE
//     clock_t stop = clock(); cout.precision(3);
//     cout << fixed << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
// #endif

//     return 0;
// }