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
	int tc, ab, ba, cnt; cin >> tc;

	while (tc--) {
		string s; cin >> s; string out(s); ab = ba = 0;

		for (int i = 0; i < s.size() - 1; i++) {
			if (s[i] == 'a' and s[i + 1] == 'b')
				ab++;

			if (s[i] == 'b' and s[i + 1] == 'a')
				ba++;
		}

		if (ab == ba)
			cout << s << endl;

		else if (ab > ba) {
			cnt = ab - ba;

			for (int i = 0; i < s.size() - 1; i++) {
				if (s[i] == 'a' and  s[i + 1] == 'b' and (i - 1 < 0 or s[i - 1] == 'a')) {
					out[i] = 'b';
					cnt--;

					if (not cnt)
						break;
				}
			}
			cout << out << endl;
		}

		else if (ab < ba) {
			cnt = ba - ab;

			for (int i = 0; i < s.size() - 1; i++) {
				if (s[i] == 'b' and  s[i + 1] == 'a' and (i - 1 < 0 or s[i - 1] == 'b')) {
					out[i] = 'a';
					cnt--;

					if (not cnt)
						break;
				}
			}
			cout << out << endl;
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