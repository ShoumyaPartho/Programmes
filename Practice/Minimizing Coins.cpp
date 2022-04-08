// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;

#define endl "\n"
#define ll long long int
const ll INF = 1e18;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve() {
	ll n, x; cin >> n >> x;
	vector<ll> noOfCoins(x + 1, INF), coin(n + 1, 0); noOfCoins[0] = 0;

	for (int i = 1; i <= n; i++)
		cin >> coin[i];

	for (int i = 1; i <= n; i++) {
		for (int j = coin[i]; j <= x; j++) {
			noOfCoins[j] = min(noOfCoins[j], noOfCoins[j - coin[i]] + 1);
		}
	}

	cout << (noOfCoins[x] == INF ? -1 : noOfCoins[x]) << endl;
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