// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
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

	ll n, minOne = 0, zero = 0, ans = 0; cin >> n;
	vector<ll> ara(n + 1, 0);

	for (int i = 1; i <= n; i++) {
		cin >> ara[i];

		if (ara[i] <= -1) {
			minOne++;
			ans += (-1 - ara[i]);
		}

		else if (ara[i] == 0)
			zero++;

		else if (ara[i] >= 1)
			ans += (ara[i] - 1);
	}

	if (minOne % 2) {

		if (zero)
			ans += zero;

		else
			ans += 2;
	}

	else
		ans += zero;

	cout << ans << endl;
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