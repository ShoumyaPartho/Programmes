#include<iostream>
#include<ctime>
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	long long int tc, p, a, b, c, t1, t2, t3, ans; cin >> tc;
	while (tc--) {
		cin >> p >> a >> b >> c;
		t1 = (a - (p % a)) % a;
		t2 = (b - (p % b)) % b;
		t3 = (c - (p % c)) % c;
		ans = min(t1, t2); ans = min(ans, t3);
		cout << ans << "\n";
	}
}

int main() {
	fastIO();
	clock_t start = clock();
	// Writhe code here...

	solve();

#ifndef ONLINE_JUDGE
	clock_t stop = clock(); cout.precision(10);
	cout << "\n\nTime taken: " << (double)(stop - start) / CLOCKS_PER_SEC * 1000 << " seconds" << endl;
#endif

	return 0;
}