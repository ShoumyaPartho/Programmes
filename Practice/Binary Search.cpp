#include<iostream>
#include<ctime>
using namespace std;

#define endl "\n"
#define ll long long int
const ll MOD = 1e9 + 7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void binSearch(ll n, ll x, ll pos, ll &cntLow, ll &cntHigh) {
	ll low = 0, high = n, mid;
	while (low < high) {
		mid = (low + high) / 2;
		if (mid <= pos) {
			if (mid < pos)
				cntLow++;
			low = mid + 1;
		}
		else {
			cntHigh++;
			high = mid;
		}
	}
}

void solve() {
	ll n, x, pos, hasLow, hasHigh, cntLow = 0, cntHigh = 0, ans = 1, left; cin >> n >> x >> pos;

	binSearch(n, x, pos, cntLow, cntHigh);
	hasLow = x - 1, hasHigh = n - x, left = n - cntLow - cntHigh - 1;

	for (ll i = 0; i < cntLow; i++)
		ans = (ans * (hasLow - i)) % MOD;
	for (ll i = 0; i < cntHigh; i++)
		ans = (ans * (hasHigh - i)) % MOD;
	for (ll i = 1; i <= left; i++)
		ans = (ans * i) % MOD;

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