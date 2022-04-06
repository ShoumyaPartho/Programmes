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
	int tc, n, k, cntPair, cntOdd, ans; cin >> tc;

	while (tc--) {
		cin >> n >> k; cntPair = cntOdd = 0;
		vector<int> cnt(30, 0);

		for (int i = 0; i < n; i++) {
			char ch; cin >> ch;
			cnt[ch - 'a' + 1]++;
		}

		for (int i = 1; i <= 26; i++) {
			cntPair += (cnt[i] / 2);
			cntOdd  += (cnt[i] % 2);
		}

		ans 	= 2 * (cntPair / k);
		cntOdd += 2 * (cntPair % k);

		if (cntOdd >= k)
			ans++;

		cout << ans << endl;
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