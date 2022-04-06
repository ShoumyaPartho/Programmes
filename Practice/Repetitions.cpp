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
	string s; cin >> s;
	int len = 0, ans = 1;

	for (int i = 0; i < s.size(); i++) {
		for (int j = i + 1; j < s.size(); j++) {
			if (s[i] == s[j]) {
				ans = max(ans, j - i + 1);

				if (j == s.size() - 1)
					i = s.size();
			}

			else if (s[j] != s[i]) {
				ans = max(ans, j - i);
				i = j - 1;
				break;
			}
		}
	}
	cout << ans << endl;
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