#include<iostream>
#include<ctime>
#include<cstring>
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

int check(int x, int y, bool *ara, int &ans) {
	int a, b, mid;
	// base case
	if (x + 1 == y) {
		a = ara[x];
		b = ara[y];
	}
	// recursive call
	else {
		mid = (x + y) / 2;
		a = check(x, mid, ara, ans);
		b = check(mid + 1, y, ara, ans);
	}
	// self work
	if ((!a or !b) and (a or b)) ans++;
	// base case
	return (a or b);
}

void solve() {
	int tc, n, m, x, ans, val; cin >> tc;
	while (tc--) {
		cin >> n >> m; bool ara[1100]; memset(ara, true, sizeof(ara)); ans = 0, val = (1 << n);
		for (int i = 1; i <= m; i++) {
			cin >> x;
			ara[x] = false;
		}
		check(1, val, ara, ans);
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