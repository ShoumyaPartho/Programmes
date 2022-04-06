#include<iostream>
#include<ctime>
#include<algorithm>
#include<vector>
#include<string>
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
	int tc, x, y, val, check; cin >> tc;
	while (tc--) {
		string s;
		cin >> s;
		x = s[0] - 'A'; y = s[s.size() - 1] - 'A';
		if (x == y) {
			cout << "NO\n";
			continue;
		}
		vector<int> sign(3);
		sign[x] = 1, sign[y] = -1; val = check = 0;

		if (count(s.begin(), s.end(), 'A' + x) == s.size() / 2)
			sign[3 ^ x ^ y] = -1;
		else
			sign[3 ^ x ^ y] = 1;

		for (char c : s) {
			val += sign[c - 'A'];
			if (val < 0) {
				check = 1;
				cout << "NO\n";
				break;
			}
		}
		if (not check) {
			if (val) cout << "NO\n";
			else cout << "YES\n";
		}
	}
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