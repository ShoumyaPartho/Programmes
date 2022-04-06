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

	ll tc, n, cnt, ans, mid, idx, midIdx; cin >> tc;

	while (tc--) {

		cin >> n;
		string s; cin >> s; s = "0" + s ; cnt = ans = mid = idx = midIdx = 0;

		for (int i = 1; i < s.size(); i++) {

			if (s[i] == '*')
				cnt++;
		}

		mid = (cnt + 2 - 1) / 2;

		for (int i = 1; i < s.size(); i ++ ) {

			if (s[i] == '*')
				idx++;

			if (idx == mid) {
				midIdx = i;
				break;
			}
		}

		idx = 0;

		for (int i = 1; i < s.size(); i++) {

			if (s[i] == '*')
				ans += abs(i - (midIdx - mid + (++idx)));
		}

		cout << ans << endl;
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