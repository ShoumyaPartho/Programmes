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
	string s, t; cin >> s >> t;
	int dif, flag = 1, temp;

	if (s[0] <= t[0])
		dif = t[0] - s[0];

	else
		dif = 'z' - s[0] + t[0] - 'a' + 1;

	for (int i = 1; i < s.size(); i++) {
		if (s[i] <= t[i])
			temp = t[i] - s[i];

		else
			temp = 'z' - s[i] + t[i] - 'a' + 1;

		if (temp != dif) {
			flag = 0;
			break;
		}
	}

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