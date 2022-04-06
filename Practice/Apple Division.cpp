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

void findAns(ll sumA, ll sumB, ll i, ll n, vector<ll> ara, ll &ans) {
	if (i == (n + 1)) {
		ans = min(ans, abs(sumA - sumB));
		return;
	}

	findAns(sumA + ara[i], sumB, i + 1, n, ara, ans);
	findAns(sumA, sumB + ara[i], i + 1, n, ara, ans);
}

void solve() {
	ll n, ans = 1e18; cin >> n;
	vector<ll> ara(n + 1, 0);

	for (int i = 1; i <= n; i++)
		cin >> ara[i];

	findAns(0, 0, 1, n, ara, ans);
	cout << ans << endl;
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