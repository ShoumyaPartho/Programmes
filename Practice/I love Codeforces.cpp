// Team Practice Contest 2021 (OCT-2)
// Problem No - G
// Problem Satement Understanding + Implementation + Observation
// KUET_NOOBS's solution was followed

// Solved by: Shoumya

#include<iostream>
#include<ctime>
#include<vector>
#include<string>
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
	ll n, m, x, y; cin >> n;
	vector<string> vs(n + 1);
	vector<ll> track(n + 1, 0);

	for (int i = 1; i <= n; i++)
		cin >> vs[i];

	cin >> m;

	for (int i = 1; i <= m; i++) {
		cin >> x >> y;
		vs[x] = vs[y];
		track[x] = track[y] + 1;
	}

	for (int i = 1; i <= track[1]; i++)
		cout << "I_love_";

	cout << vs[1] << endl;
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