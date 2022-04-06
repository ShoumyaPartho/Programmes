// Tutorial for understanding
// Geothermal Solution to Implementation


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
	int tc, ans, p; cin >> tc; string reqStrs[] = {"00", "25", "50", "75"}, n;

	while (tc--) {
		cin >> n; ans = (int) n.size();

		for (int i = 0; i < 4; i++) {
			p = 1;

			for (int j = n.size() - 1; j >= 0; j--) {
				if (n[j] == reqStrs[i][p])
					p--;

				if (p < 0) {
					ans  = min(ans, ((int) n.size() - j - 2));
					break;
				}
			}
		}

		cout << ans << endl;
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