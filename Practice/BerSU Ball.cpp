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
	int n, m, cnt = 0;

	cin >> n; vector<int> boys(n + 1, 0);

	for (int i = 1; i <= n; i++)
		cin >> boys[i];

	sort(boys.begin() + 1, boys.end());

	cin >> m; vector<int> girls(m + 1, 0);

	for (int i = 1; i <= m; i++)
		cin >> girls[i];

	sort(girls.begin() + 1, girls.end());

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (girls[j] != -1 and (abs(boys[i] - girls[j]) <= 1)) {
				girls[j] = -1;
				cnt++;
				break;
			}
		}
	}

	cout << cnt << endl;
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