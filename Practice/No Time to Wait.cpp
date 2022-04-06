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
	int n, h, x, flag = 0; cin >> n >> h >> x;
	int ara[n]; for (int i = 0; i < n; i++) cin >> ara[i];
	for (int i = 0; i < n; i++) {
		if (x + ara[i] >= h) {
			flag = 1; break;
		}
	}
	cout << (flag ? "YES\n" : "NO\n");
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