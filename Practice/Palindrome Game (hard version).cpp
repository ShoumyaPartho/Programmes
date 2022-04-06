// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
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

bool isPalindrome(string &s) {

	string temp = "a" + s;

	for (int i = 1; i <= (s.size() / 2); i++) {

		if (not (temp[i] == temp[s.size() - i + 1]))
			return false;
	}

	return true;
}

int cntZero(string &s) {

	int cnt = 0;

	for (auto it : s) {
		if (it == '0')
			cnt++;
	}

	return cnt;
}

void solve() {

	int tc, n, zero; cin >> tc;

	while (tc--) {

		string s;
		cin >> n >> s;

		if (isPalindrome(s)) {

			zero = cntZero(s);

			if (zero == 1)
				cout << "BOB" << endl;

			else if (zero & 1)
				cout << "ALICE" << endl;

			else
				cout << "BOB" << endl;
		}

		else if ((n & 1) and s[n / 2] == '0' and cntZero(s) == 2)
			cout << "DRAW" << endl;

		else
			cout << "ALICE" << endl;
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