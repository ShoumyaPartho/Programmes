// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

#define endl "\n"
#define ll long long int
const ll INF = 1e9 + 7;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

ll func1(ll a, ll b, ll x) {

	ll t1 = (b - x + 1) / 2;
	ll t2 = (x - a + 1) / 2;

	return t1 + t2;
}

ll func2(ll a, ll b, ll x) {

	ll t1 = ceil((b - x) / 2);
	ll t2 = ceil((x - a) / 2);

	return t1 + t2;
}

ll bs_t2(ll a, ll b) {
	ll start = a, end = b, mid, ans = -INF;

	while (start >= end) {
		mid = func2(a, b, (start + end) / 2);

		if (mid >= ans) {
			ans = mid;
			end = ((start + end) / 2) + 1;
		}

		else
			start = ((start + end) / 2) - 1;
	}

	return ans;
}

ll bs_t1(ll a, ll b) {
	ll start = a, end = b, mid, ans = -1;

	while (start <= end) {
		mid = func1(a, b, (start + end) / 2);

		if (mid >= ans) {
			ans = mid;
			start = ((start + end) / 2) + 1;
		}

		else
			end = ((start + end) / 2) - 1;
	}

	return ans;
}

void solve() {
	ll tc, a, b, ans; cin >> tc;

	while (tc--) {
		cin >> a >> b;

		if (a <= b)
			ans = bs_t1(a, b);

		else
			ans = bs_t2(a, b);

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