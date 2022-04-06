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
	ll tc, n, k, x, lenNeg, lenPos, maxi, ans; cin >> tc;

	while (tc--) {
		cin >> n >> k;
		vector<int> pos, neg;

		for (int i = 1; i <= n; i++) {
			cin >> x;

			if (x < 0)
				neg.push_back(-x);

			else
				pos.push_back(x);
		}

		lenNeg = neg.size(), lenPos = pos.size(), maxi = ans = 0 ;
		sort(neg.begin(), neg.end());
		sort(pos.begin(), pos.end());

		for (int i = lenNeg - 1; i >= 0; i -= k)
			ans += (neg[i] * 2ll);

		for (int i = lenPos - 1; i >= 0; i -= k)
			ans += (pos[i] * 2ll);

		if (lenNeg)
			maxi = max(maxi, neg[lenNeg - 1] * 1ll);

		if (lenPos)
			maxi = max(maxi, pos[lenPos - 1] * 1ll);

		cout << ans - maxi << endl;
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