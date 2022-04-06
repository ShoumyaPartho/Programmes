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
	int h, w; cin >> h >> w;
	vector<vector<int> > matrix(h + 1, vector<int> (w + 1, 0)), b(w + 1, vector<int> (h + 1, 0));

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++)
			cin >> matrix[i][j];
	}

	for (int i = 1; i <= w; i++) {
		for (int j = 1; j <= h; j++)
			b[i][j] = matrix[j][i];
	}

	for (int i = 1; i <= w; i++) {
		for (int j = 1; j <= h; j++)
			cout << b[i][j] << " \n"[j == h];
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