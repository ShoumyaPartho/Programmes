#include<iostream>
#include<ctime>
#include<map>
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

class cmprtr {
public:
	bool operator()(const pair<int, int > &item1, const pair<int, int> &item2) const {
		if (item1.first != item2.first)
			return item1.first > item2.first;
		else
			return item1.second < item2.second;
	}
};

void solve() {
	int n, k, slv, pnlty, cnt; cin >> n >> k;
	map<pair<int, int>, int, cmprtr > mp;
	for (int i = 1; i <= n; i++) {
		cin >> slv >> pnlty;
		mp[ {slv, pnlty}]++;
	}

	auto it = mp.begin(); cnt = it->second; it++;
	for (; it != mp.end(); it++) {
		it->second += cnt;
		cnt = it->second;
	}

	it = mp.begin(); cnt = 0;
	for (; it != mp.end(); it++) {
		if (k <= (it->second)) {
			cout << (it->second) - cnt << endl;
			break;
		}
		cnt = it->second;
	}
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

// bool cmprtr(pair<int, int> &item1, pair<int, int> &item2) {
// 	if (item1.first != item2.first)
// 		return item1.first > item2.second;

// 	else
// 		return item1.second < item2.second;
// }

// void solve() {
// 	int n, k, cnt = 0, ans = 0; cin >> n >> k;
// 	vector<pair<int, int> > ara(n + 1, {0, 0});

// 	for (int i = 1; i <= n; i++)
// 		cin >> ara[i].first >> ara[i].second;

// 	sort(ara.begin() + 1, ara.end(), cmprtr);

// 	for (int i = k + 1; i <= n; i++) {
// 		if (ara[i].first == ara[k].first and ara[i].second == ara[k].second)
// 			cnt++;

// 		else
// 			break;
// 	}

// 	ans += cnt; cnt = 0;

// 	for (int i = k - 1; i; i--) {
// 		if (ara[i].first == ara[k].first and ara[i].second == ara[k].second)
// 			cnt++;

// 		else
// 			break;
// 	}

// 	ans += cnt;

// 	cout << ans + 1 << endl;
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