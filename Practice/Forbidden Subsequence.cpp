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
	int tc; cin >> tc;

	while (tc--) {
		string s, t; cin >> s >> t;
		int ara[26] = {0};

		for (int i = 0; i < s.size(); i++)
			ara[s[i] - 'a']++;

		sort(s.begin(), s.end());

		if (t != "abc" or (not ara[0]) or (not ara[1]) or (not ara[2])) {
			cout << s << endl;
			continue;
		}

		while (ara[0]) {
			cout << 'a';
			ara[0]--;
		}

		while (ara[2]) {
			cout << 'c';
			ara[2]--;
		}

		while (ara[1]) {
			cout << 'b';
			ara[1]--;
		}

		for (int i = 3; i < 26; i++) {
			while (ara[i]) {
				cout << (char)('a' + i);
				ara[i]--;
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