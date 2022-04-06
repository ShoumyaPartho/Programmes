// Solved by: Shoumya

#include<iostream>
#include<ctime>
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
	int n, idx; cin >> n;

	vector<int> ara(n + 1, 0);
	vector<pair<int, int> > arra;

	for (int i = 1; i <= n; i++)
		cin >> ara[i];

	for (int i = 1; i <= n; i++) {
		idx = i;

		for (int j = i + 1; j <= n; j++) {
			if (ara[j] < ara[idx])
				idx = j;
		}

		if (idx != i) {
			arra.push_back({i - 1, idx - 1});
			swap(ara[i], ara[idx]);
		}
	}

	cout << (int)arra.size() << endl;

	for (auto x : arra)
		cout << x.first << " " << x.second << endl;
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
// #define INF 1e9+7

// void fastIO() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0), cout.tie(0);

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
// }

// void solve() {
// 	int n; cin >> n;
// 	vector<int> ara(n, 0), sorted(n, 0);
// 	vector<pair<int, int> > list;

// 	for (int i = 0; i < n; i++) {
// 		cin >> ara[i];
// 		sorted[i] = ara[i];
// 	}

// 	sort(sorted.begin(), sorted.end());

// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < n; j++) {
// 			if (sorted[i] == ara[j] and i != j) {
// 				if (ara[i] == ara[j]) { // This corner case
// 					ara[i] = INF;		// was missing
// 					break;				// all the time being -_-
// 				}

// 				list.push_back({i, j});
// 				swap(ara[i], ara[j]);
// 				ara[i] = INF;
// 				break;
// 			}
// 		}
// 	}

// 	cout << (int)list.size() << endl;

// 	for (auto x : list)
// 		cout << x.first << " " << x.second << endl;
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