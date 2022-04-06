// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<unordered_map>
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

void solve() {
	ll n, k, sum = 0, cnt = 0; cin >> n >> k;
	vector<ll> ara(n + 1, 0);
	unordered_map<ll, ll> mp; mp[0] = 1;

	for (int i = 1; i <= n; i++)
		cin >> ara[i];

	for (int i = 1; i <= n; i++) {
		sum += ara[i];

		if (mp.count(sum - k))
			cnt += mp[sum - k];

		mp[sum]++;
	}

	cout << cnt << endl;
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