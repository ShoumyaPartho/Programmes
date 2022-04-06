// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<set>
#include<map>
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

bool cmptr(pair<int, pair<int, char> > &a, pair<int, pair<int, char> > &b) {
	if (a.first != b.first)
		return a.first < b.first;

	else
		return a.second.first < b.second.first;
}

void solve() {
	int n, flag = 0, x, y; cin >> n;
	vector<pair<int, pair<int, char> > > points(n + 1, {0, {0, '0'}});
	map<int, pair<char, char> > mp;
	set<int> st;
	string s; char dir;

	for (int i = 1; i <= n; i++)
		cin >> points[i].first >> points[i].second.first;

	cin >> s;

	for (int i = 1; i <= n; i++)
		points[i].second.second = s[i - 1];

	sort(points.begin() + 1, points.end(), cmptr);

	for (int i = 1; i <= n; i++) {
		x = points[i].first, y = points[i].second.first;
		dir = points[i].second.second;

		if (st.count(y)) {
			if (dir == 'L' and mp[y].first == 'R') {
				flag = 1;
				break;
			}

			if (dir == 'L')
				mp[y].second = 'L';

			else if (dir == 'R')
				mp[y].first = 'R';
		}

		else {
			st.insert(y);

			if (dir == 'L')
				mp[y].second = 'L';

			else if (dir == 'R')
				mp[y].first = 'R';
		}
	}

	cout << (flag ? "Yes" : "No") << endl;
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