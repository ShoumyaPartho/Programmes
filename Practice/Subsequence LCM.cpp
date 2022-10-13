// Solved by: Shoumya

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long int

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

const int N = 100010, MOD = 1e9 + 7;
ll f[N], If[N], pw2[N];

ll raise (ll a, ll n) {
	ll res = 1;
	a = a % MOD;

	while (n) {
		if (n & 1ll)
			res = (res * a) % MOD;

		a = (a * a) % MOD;
		n >>= 1;
	}

	return res % MOD;
}

ll inverse(ll n) {
	return raise(n, MOD - 2);
}

ll nCr (ll n, ll r) {
	if (n < r)
		return 0;

	return (((f[n] * If[r]) % MOD) * If[n - r]) % MOD;
}

void calc() {
	f[0] = f[1] = 1;
	If[0] = If[1] = 1;

	for (int i = 2; i < N - 5; i++) {
		f[i] = (f[i - 1] * i) % MOD;
		If[i] = (inverse(i) * If[i - 1]) % MOD;
	}
}

void solve() {
	ll n, ans = 0; cin >> n;
	vector<ll> nums(n + 1, 0);
	unordered_map<ll, ll> mp, cnt;

	for (int i = 1; i <= n; i++) {
		cin >> nums[i];
		mp[nums[i]]++;
	}

	for (auto it : mp) {
		ll freq = it.second;
		ans = (ans + pw2[freq]) % MOD;
		ans = (ans - (freq + 1) + MOD) % MOD;

		for (ll j = 1; j * j <= it.first; j++) {
			if (it.first % j == 0) {
				cnt[j] += freq;
				if (j > 1)
					ans = (ans - nCr(freq, j) + MOD) % MOD;

				if (((it.first / j) != j) and (it.first / j) <= n) {
					cnt[it.first / j] += freq;
					if ((it.first / j) > 1)
						ans = (ans - nCr(freq, it.first / j) + MOD) % MOD;
				}
			}
		}
	}

	for (int i = 2; i <= n; i++)
		ans = (ans + nCr(cnt[i], i)) % MOD;

	cout << ans << endl;
}

int main() {
	fastIO();

	// solve();

	calc();

	int tc, t; cin >> t;
	pw2[0] = 1, pw2[1] = 2;

	for (int i = 2; i < N - 5; i++)
		pw2[i] = (pw2[i - 1] * 2ll) % MOD;


	for (tc = 1; tc <= t; tc++) {
		// cout<<"Case "<<tc<<": ";
		solve();
	}

	return 0;
}