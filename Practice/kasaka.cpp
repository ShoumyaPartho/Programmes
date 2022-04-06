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

bool isPalindrome(int startP, int endP, string &s) {
	for (int i = startP, j = endP; i <= j; i++, j--) {
		if (s[i] != s[j])
			return false;
	}

	return true;
}

void solve() {
	string s; cin >> s;
	int startP = -1, endP = -1, flag;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] != 'a') {
			startP = i;
			break;
		}
	}

	for (int i = s.size() - 1; i >= 0; i--) {
		if (s[i] != 'a') {
			endP = i;
			break;
		}
	}

	if (startP == -1)
		flag = 1;

	else if (startP != -1 and endP != -1 and (startP > (s.size() - 1 - endP)))
		flag = 0;

	else
		flag = isPalindrome(startP, endP, s);

	// cout << startP << " " << endP << endl;

	cout << (flag ? "Yes" : "No") << endl;
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