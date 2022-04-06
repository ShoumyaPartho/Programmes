// Solved by: Shoumya

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
		int left, right, q = 0; // left and right contains the index of ( and ) respectively.

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(')
				left = i;
			else if (s[i] == ')')
				right = i;
			else if (s[i] == '?')
				q++;
		}

		if (right < left) {
			if (right and (not(q % 2)) and (left != (s.size() - 1)))
				cout << "YES\n";
			else
				cout << "NO\n";
		}

		else if (q % 2)
			cout << "NO\n";

		else
			cout << "YES\n";
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