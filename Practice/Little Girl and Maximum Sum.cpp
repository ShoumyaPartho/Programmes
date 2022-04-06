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
	ll n, q, l, r, ans = 0; cin >> n >> q;
	vector<ll> ara(n + 1, 0), sumAra(n + 5, 0);

	for (int i = 1; i <= n; i++)
		cin >> ara[i];

	for (int i = 1; i <= q; i++) {
		cin >> l >> r;
		sumAra[l]++;
		sumAra[r + 1]--;
	}

	for (int i = 1; i <= n; i++)
		sumAra[i] += sumAra[i - 1];

	sort(ara.begin() + 1, ara.end());
	sort(sumAra.begin() + 1, sumAra.begin() + 1 + n);

	for (int i = 1; i <= n; i++)
		ans += (ara[i] * sumAra[i]);

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