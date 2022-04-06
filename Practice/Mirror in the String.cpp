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
	int tc, n, low, high, mid, pos; cin >> tc;

	while (tc--) {
		cin >> n;
		string s; cin >> s;
		low = 0, high = n - 1; s.push_back((char)'z' + 2);

		while (low <= high) {
			mid = (low + high) >> 1;

			if (s[mid] <= s[mid + 1]) // {
				pos = mid;
			high = mid - 1;
			// }

			// else
			// 	low = mid + 1;
		}

		for (int i = 0; i <= pos; i++)
			cout << s[i];

		for (int i = pos; i >= 0; i--)
			cout << s[i];
		cout << endl;
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