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
	int tc, n, minDis, prev; cin >> tc;
	while (tc--) {
		string s; cin >> s;  n = s.size(); s = "0" + s; minDis = 1, prev = 0;
		for (int i = 1; i <= n; i++) {
			if (s[i] == 'R') {
				minDis = max(minDis, i - prev);
				prev = i;
				continue;
			}
			if (i == n and s[i] != 'R') {
				minDis = max(minDis, i - prev + 1);
				continue;
			}
		}
		cout << minDis << endl;
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