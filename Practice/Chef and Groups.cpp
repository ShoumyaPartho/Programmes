#include<iostream>
#include<ctime>
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
	int tc; cin >> tc;
	while (tc--) {
		string s; cin >> s;
		int grp = 0, p1 = -1, p2 = -1;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '1') {
				grp++;
				for (int j = i; j < s.length(); j++) {
					if (s[j] == '0') {
						i = j - 1;
						break;
					}
					else if (j == s.length() - 1) i = s.length();
				}
			}
		}
		cout << grp << endl;
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