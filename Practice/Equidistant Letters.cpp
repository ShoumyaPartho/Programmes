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
	int tc, idx, c; cin >> tc;

	while (tc--) {
		string s; cin >> s; idx = c = 0;
		char str[70]; vector<int> cnt(30, 0);

		for (int i = 0; i < s.size(); i++)
			cnt[s[i] - 'a' + 1]++;

		for (int i = 0; i < s.size(); i++) {
			if (cnt[s[i] - 'a' + 1] == 2) {
				str[idx] = str[idx + 1] = s[i];
				idx += 2; c++;
				cnt[s[i] - 'a' + 1] = 0;
			}
		}

		for (int i = 1, j = 0; i <= c; i++, j += 2)
			cout << str[j];

		for (int i = 1, j = 1; i <= c; i++, j += 2)
			cout << str[j];

		for (int i = 0; i < s.size(); i++) {
			if (cnt[s[i] - 'a' + 1]) {
				cout << s[i];
				cnt[s[i] - 'a' + 1]--;
			}
		}

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