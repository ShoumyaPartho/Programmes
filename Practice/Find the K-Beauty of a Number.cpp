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

int divisorSubstrings(int num, int k) {
	string n = to_string(num);
	int l = 0, len = n.size(), ans = 0, tempNum;

	while (l + k <= len) {
		tempNum = 0;

		for (int i = l; i < l + k; i++) {
			tempNum *= 10;
			tempNum += (n[i] - '0');
		}

		if (not (tempNum == 0 or (num % tempNum)))
			ans++;

		l++;
	}

	return ans;
}

void solve() {
	int num, k; cin >> num >> k;

	cout << divisorSubstrings(num, k) << endl;;
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