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
	ll tc, a, b, val; cin >> tc;
	while (tc--) {
		cin >> a >> b; val = 0ll;
		for (auto i = 35; i >= 0; i--) {
			if ((a & (1ll << i)) and (b & (1ll << i))) val |= (1ll << i);
		}
		if (val) cout << (a ^ val) + (b ^ val) << endl;
		else cout << (a ^ b) << endl;
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