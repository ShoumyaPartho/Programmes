// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<string>
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
	string line; cin >> line;
	int ara[4] = {0}, plus = 0;

	for (int i = 0; i < line.size(); i++) {
		if (line[i] == '+')
			continue;

		ara[line[i] - '0']++;
	}

	plus = ara[1] + ara[2] + ara[3];

	for (int idx = 1, i = 1, j = 1; i <= ara[idx], j <= plus; i++, j++) {
		if (ara[idx])
			cout << idx;

		else {
			j--;
			idx++;
			i = 0;
			continue;
		}

		cout << (j < plus ? "+" : endl);

		if (i >= ara[idx])
			i = 0, idx++;

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