// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<unordered_map>
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
	ll n, k, x, ans = 0; unordered_map<ll, ll> mp; cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		cin >> x; x %= k; mp[x]++;
	}

	for (auto it = mp.begin(); it != mp.end(); it++)
		ans += (it->second * ((it->second) - 1));

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