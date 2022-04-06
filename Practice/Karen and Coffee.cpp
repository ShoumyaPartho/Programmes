// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
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
	ll n, k, q, l, r; cin >> n >> k >> q;
	vector<ll> ara(200005, 0);

	for (int i = 1; i <= n; i++) {
		cin >> l >> r;
		ara[l]++;
		ara[r + 1]--;
	}

	for (int i = 1; i < 200002; i++) // Prefix sum
		ara[i] += ara[i - 1];

	for (int i = 1; i < 200002; i++) {
		if (ara[i] >= k)
			ara[i] = 1;

		else
			ara[i] = 0;
	}

	for (int i = 1; i < 200002; i++)
		ara[i] += ara[i - 1];

	for (int i = 1; i <= q; i++) {
		cin >> l >> r;

		cout << ara[r] - ara[l - 1] << endl;
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