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
	int tc, evenIdx; cin >> tc;

	while (tc--) {
		string num; cin >> num;

		if (not ((num[num.size() - 1] - '0') & 1))
			cout << 0 << endl;

		else if (not ((num[0] - '0') & 1))
			cout << 1 << endl;

		else {
			evenIdx = -1;
			for (auto i = 1; i < num.size(); i++) {
				if (not ((num[i] - '0') & 1)) {
					evenIdx = i;
					break;
				}
			}

			if (evenIdx != -1)
				cout << 2 << endl;

			else
				cout << -1 << endl;
		}
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