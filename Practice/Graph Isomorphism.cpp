// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<numeric>
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
	int n, m, x, y, flag; cin >> n >> m;
	vector<vector<bool> > takaHashi(n + 1, vector<bool> (n + 1, false)), aoki(n + 1, vector<bool> (n + 1, false));
	vector<int> nums(n + 1, 0);

	// for (int i = 1; i <= n; i++)
	// 	nums[i] = i;

	iota(nums.begin(), nums.end(), 0);

	for (int i = 1; i <= m; i++) {
		cin >> x >> y;

		takaHashi[x][y] = takaHashi[y][x] = true;
	}

	for (int i = 1; i <= m; i++) {
		cin >> x >> y;

		aoki[x][y] = aoki[y][x] = true;
	}

	do {
		flag = 1;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (takaHashi[i][j] != aoki[nums[i]][nums[j]]) {
					flag = 0;
					break;
				}
			}
		}

		if (flag)
			break;

	} while (next_permutation(nums.begin() + 1, nums.end()));

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