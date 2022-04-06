// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const ll MAX = 1e18 + 1;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void findAns(int *primes, ll num, int idx, int lim, ll divs, ll n, ll &ans) {

	if (divs > n or num >= MAX or num <= 0)
		return;

	if (divs == n) {
		ans = min(ans, num);
		return;
	}

	if (idx > 10)
		return;

	for (int i = 0; i <= lim; i++) {
		findAns(primes, num, idx + 1, i, divs * (i + 1), n, ans);
		num *= primes[idx];
	}
}

void solve() {
	int primes[11] = {0, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
	ll n, ans = MAX, divs = 1, num = 1; cin >> n;

	findAns(primes, num, 1, 62, divs, n, ans);

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