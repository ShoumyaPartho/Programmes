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

void solve() {
	ll tc, n, h, sum; cin >> tc;

	while (tc--) {
		cin >> n >> h;
		vector<ll> ara(n + 1, 0);

		for (int i = 1; i <= n; i++)
			cin >> ara[i];

		sort(ara.begin() + 1, ara.end(), greater<ll> ());

		sum = ara[1] + ara[2];

		if (h % sum == 0)
			cout << (h / sum) * 2ll << endl;

		else if ((h % sum) <= ara[1])
			cout << (h / sum) * 2ll + 1 << endl;

		else
			cout << (h / sum) * 2ll + 2 << endl;
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