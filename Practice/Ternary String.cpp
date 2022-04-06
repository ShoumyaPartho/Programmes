#include<iostream>
#include<ctime>
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
	int tc, ans, sz, one, two, three, maxi, mini; cin >> tc;
	while (tc--) {
		string s; cin >> s; ans = 1e9, sz = s.size(), one = two = three = -1, maxi = -1, mini = sz;

		for (int i = 0; i < sz; i++) {
			if (s[i] == '1') one = i;
			else if (s[i] == '2') two = i;
			else three = i;
			maxi = max(one, max(two, three)), mini = min(one, min(two, three));

			if (one != -1 and two != -1 and three != -1) ans = min(ans, maxi - mini + 1);
		}
		if (ans > sz) cout << 0 << endl;
		else cout << ans << endl;
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