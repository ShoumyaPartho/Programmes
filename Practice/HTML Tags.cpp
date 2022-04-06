// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<string>
#include<algorithm>
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
		string s; bool check = true;
		cin >> s;

		if (not(s[0] == '<' and s[1] == '/' and s[s.size() - 1] == '>'))
			check = false;

		if (check) {
			for (int i = 2; i < s.size() - 1; i++) {
				if (not((s[i] >= '0' and s[i] <= '9') or (s[i] >= 'a' and s[i] <= 'z'))) {
					check = false;
					break;
				}
			}
		}

		if (check and s.size() <= 3)
			check = false;

		cout << (check ? "Success" : "Error") << endl;
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