// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<map>
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
	ll tc, n, temp, x, ans; cin >> tc;

	while (tc--) {
		cin >> n; ans = 0;
		map<int, int> mp;
		for (int i = 1; i <= n; i++) {

			cin >> temp;
			x = temp - i;
			ans += mp[x];
			mp[x]++;
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