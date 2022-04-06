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
	string s; cin >> s; int cnt = 0;
	sort(s.begin(), s.end());
	bool flag = true;

	while (flag) {
		cnt++;
		flag = next_permutation(s.begin(), s.end());
	}

	cout << cnt << endl;
	sort(s.begin(), s.end()); flag = true;

	while (flag) {
		cout << s << endl;
		flag = next_permutation(s.begin(), s.end());
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