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

void add(int x, vector<bool> &flag, int n) {
	for (int i = 1; i <= (1 << n); i++) {
		if (flag[i] and not flag[i ^ x])
			flag[i ^ x] = true;
	}

	flag[x] = true;
}

void solve() {
	int n, cnt = 1; cin >> n;
	vector<pair<int, int> > ara((1 << n) - 1);
	vector<bool> flag((1 << n) + 5, false);
	ll ans = 0;

	for (auto &x : ara) {
		cin >> x.first;
		x.second = cnt++;
	}

	sort(ara.begin(), ara.end());

	for (auto x : ara) {
		if (flag[x.second])
			continue;

		add(x.second, flag, n);
		ans += x.first;
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











////////////////////  Practice mood solution  /////////////////////////


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

// void add(int id, vector<bool> &flag, int n) {
//     for (auto i = 0; i < (1 << n); i++) {
//         if (flag[i] and not flag[i ^ id])
//             flag[i ^ id] = true;
//     }

//     flag[id] = true;
// }

// void solve() {
//     int n, cnt = 1; cin >> n; ll ans = 0;
//     vector<pair<int, int> > ara((1 << n) - 1);
//     vector<bool> flag((1 << n) + 5, false);

//     for (auto &x : ara) {
//         cin >> x.first;
//         x.second = cnt++;
//     }

//     sort(ara.begin(), ara.end());

//     for (auto &x : ara) {
//         if (flag[x.second])
//             continue;

//         add(x.second, flag, n);
//         ans += x.first;
//     }

//     cout << ans << endl;
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