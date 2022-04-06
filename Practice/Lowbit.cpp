// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const ll MOD = 998244353;
const ll N   = 1e5 + 10;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

ll segTree[4 * N], lazyMul[4 * N], notPowOfTwoCnt[4 * N];

ll lowbit(ll x) {
	return (x & (-x));
}

int isPowerOfTwo(ll x) {
	if (x != lowbit(x))
		return 1;

	return 0;
}

// void push(ll v) {
// 	if (lazyMul[v] > 1) {
// 		segTree[v] = segTree[v] * lazyMul[v] % MOD;

// 		lazyMul[v * 2] = (lazyMul[v * 2] * lazyMul[v]) % MOD;
// 		lazyMul[v * 2 + 1] = (lazyMul[v * 2 + 1] * lazyMul[v]) % MOD;

// 		lazyMul[v] = 1;
// 	}
// }

void push(ll v, ll l, ll r) {
	if (lazyMul[v] > 1) {
		segTree[v] = segTree[v] * lazyMul[v] % MOD;
		if (l != r)
		{
			lazyMul[v * 2] = lazyMul[v * 2] * lazyMul[v] % MOD;
			lazyMul[v * 2 + 1] = lazyMul[v * 2 + 1] * lazyMul[v] % MOD;
		}
		lazyMul[v] = 1;
	}
}

void build(vector<ll> &nums, ll v, ll l, ll r) {
	if (l == r) {
		segTree[v] = nums[l];
		lazyMul[v] = 1;
		notPowOfTwoCnt[v] = isPowerOfTwo(nums[l]);
		return;
	}

	ll tm = (l + r) >> 1;

	build(nums, v * 2, l, tm);
	build(nums, v * 2 + 1, tm + 1, r);

	lazyMul[v] = 1;
	segTree[v] = (segTree[v * 2] + segTree[v * 2 + 1]) % MOD;
	notPowOfTwoCnt[v] = notPowOfTwoCnt[v * 2] + notPowOfTwoCnt[v * 2 + 1];
}

void update(vector<ll> &nums, ll v, ll l, ll r, ll tl, ll tr) {
	push(v, tl, tr);
	if (l > r)
		return;

	if (l <= tl and tr <= r and (not notPowOfTwoCnt[v])) {
		lazyMul[v] = 2 * (lazyMul[v] % MOD) % MOD;
		push(v, tl, tr);

		return;
	}

	else if (tl == tr and notPowOfTwoCnt[v]) {
		segTree[v] = lowbit(segTree[v]) + segTree[v];
		notPowOfTwoCnt[v] = isPowerOfTwo(segTree[v]);

		return;
	}

	else {
		push(v, tl, tr);
		ll tm = (tl + tr) >> 1;

		update(nums, v * 2, l, min(r, tm), tl, tm);
		update(nums, v * 2 + 1, max(l, tm + 1), r, tm + 1, tr);

		segTree[v] = (segTree[v * 2] + segTree[v * 2 + 1]) % MOD;
		notPowOfTwoCnt[v] = notPowOfTwoCnt[v * 2] + notPowOfTwoCnt[v * 2 + 1];
	}
}

ll query(vector<ll> &nums, ll v, ll l, ll r, ll tl, ll tr) {
	push(v, tl, tr);

	if (l <= tl and tr <= r)
		return segTree[v] % MOD;

	ll tm = (tl + tr) >> 1, ans = 0;

	if (l <= tm)
		ans = query(nums, v * 2, l, min(tm, r), tl, tm) % MOD;

	if (r > tm)
		ans = (ans + query(nums, v * 2 + 1, max(tm + 1, l), r, tm + 1, tr) % MOD) % MOD;

	return ans;
}

void solve() {
	ll tc, n, m, q, l, r; cin >> tc;

	while (tc--) {
		cin >> n;
		vector<ll> nums(n + 1, 0);

		for (int i = 1; i <= n; i++)
			cin >> nums[i];

		build(nums, 1, 1, n);

		cin >> m;

		for (int i = 1; i <= m; i++) {
			cin >> q >> l >> r;

			if (q == 1)
				update(nums, 1, l, r, 1, n);

			else if (q == 2)
				cout << query(nums, 1, l, r, 1, n) << endl;
		}
	}
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